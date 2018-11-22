/**
 * B8. Doti trīs naturāli skaitļi. Noteikt, vai starp dotajiem skaitļiem ir tāds, kura ciparu summa ir vienāda ar pārējo
 * divu skaitļu starpību. Ja ir, izdrukāt šo skaitli. Skaitļu dalīšana ciparos jāveic skaitliski. Risinājumā izmantot 
 * funkciju, kas aprēķina skaitļa ciparu summu.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

//Define all the functions in the file
int main(int argc, char* argv[]);
int sumOfDigits(int number);
int getNumberInput(string prompt);
void executeTask(bool verbose);

int main(int argc, char* argv[])
{
    //Just some argument handling for some light debuging and understanding of the process
    bool verbose = false;

    if (argc > 1) {
        if (string(argv[1]) == "-v") {
            cout << "We got verbose" << endl;
            verbose = true;
        } else {
            cout << "We don't have verbose for some reason" << endl;
        }
    }
	
	int userInput = 0;
	
	do{
		executeTask(verbose);
		cout << "If you want to continue type 0, if exit type 1 : ";
		cin >> userInput;
	}while(userInput == 0);

    

    return 0;
}

void executeTask(bool verbose) {
	/*
     * Get 3 number input
     * Split all numbers into digits
     */
    int number1 = getNumberInput("Input first number");
    int sum1 = sumOfDigits(number1);
    int number2 = getNumberInput("Input second number");
    int sum2 = sumOfDigits(number2);
    int number3 = getNumberInput("Input third number");
    int sum3 = sumOfDigits(number3);

    // Get all number diffs
    int diff1 = abs(number1 - number2);
    int diff2 = abs(number1 - number3);
    int diff3 = abs(number2 - number3);

    //Output somethings if verbose specified
    if (verbose) {
        cout << "Number 1 digit sum is " << sum1 << endl;
        cout << "Number 2 digit sum is " << sum2 << endl;
        cout << "Number 3 digit sum is " << sum3 << endl;

        cout << "Diff between number 1 and 2 is " << diff1 << endl;
        cout << "Diff between number 1 and 3 is " << diff2 << endl;
        cout << "Diff between number 2 and 3 is " << diff3 << endl;
    }

    // Go over all the posible diffs and print out when the value found
    if (sum1 == diff3)
    {
        cout << "Number 1(" << number1 << ") digit sum(" << sum1 << ")";
        cout << " is the same as number 2(" << number2 << ") and 3(" << number3 << ") diff(" << diff3 << ")" << endl;
    }

    if (sum2 == diff2)
    {
        cout << "Number 2(" << number2 << ") digit sum(" << sum2 << ")";
        cout << " is the same as number 1(" << number1 << ") and 3(" << number3 << ") diff(" << diff2 << ")" << endl;
    }

    if (sum3 == diff1)
    {
        cout << "Number 3(" << number3 << ") digit sum(" << sum3 << ")";
        cout << " is the same as number 1(" << number1 << ") and 2(" << number2 << ") diff(" << diff1 << ")" << endl;
    }
	return;
}


/**
 * Get sum of all the digits form a number
 * 
 * @var int number Number to use when getting sum of digits
 * 
 * @return int
 */
int sumOfDigits(int number)
{
    int sum = 0;
    do
    {
        sum += number % 10;
        number /= 10;
    } while (number > 0);

    return sum;
}

/**
 * Get natural number input form user with promt 
 * 
 * @var string promt Text that promts the user
 * 
 * @return int
 */
int getNumberInput(string prompt)
{
    int inputNumber = 0;
    bool correctInput = false;

    //Ask for user input until the number inputed is natural
    do
    {
        cout << prompt << " : ";
        cin >> inputNumber;
        if (inputNumber < 0)
        {
            cout << "Number must be natural" << endl;
        }
        else
        {
            correctInput = true;
        }
    } while (!correctInput);

    return inputNumber;
}