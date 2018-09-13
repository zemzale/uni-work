/*
 * Alberts Zemzāle, az18071
 * A32 Atrast divu naturāļu skaitļu m un n mazāko kopīgo dalāmo
 * Programma izveidota 13/09/2018
 */
#include <iostream>

using namespace std;

/**
 * Finds the greatest common divider between two numbers
 *
 * Finds the greatest common diveders between two natural numbers.
 * This WILL NOT work for numbers that are lower then 1
 *
 * @param int num1 First number 
 * @param int num2 Second number
 *
 * @return int Greatest common divisor 
 */
int findGreatestCommonDivisor(int num1, int num2) {

    //Set the divisable as the larger number and divider as the smaller 
    int gcdDivider = num1 < num2 ? num1 : num2;
    int gcdDivisable = num1 > num2 ? num1 : num2;

    bool gcdFound = false;
    int gcd = 0;

    /*
     * Divide numbers untill the reminder is 0. 
     * The next divider is the reminder of the last division.
     * The next divisable is the diveder of the last division.
     */
    while (!gcdFound) {
        int reminder = gcdDivisable % gcdDivider;
        if (reminder == 0) {
            gcdFound = true;
            gcd = gcdDivider;
        } else {
            gcdDivisable = gcdDivider;
            gcdDivider = reminder;
        }
    }

    return gcd;
}

/*
 * Find the lowest common multiple of two numbers
 *
 * Find the lower common multiple of two integer numbers 
 * that are bigger then 0.
 *
 * @param int num1 First number
 * @param int num2 Second number
 *
 * @return Lowest common multiple
 */
int findLowestCommonMultiple(int num1, int num2) {

    int gcd = findGreatestCommonDivisor(num1, num2);
    int leastCommonMultiple = num1 * num2 / gcd;

    return leastCommonMultiple; 
}

/*
 * Take natural number input with a promt message
 *
 * Take natural number user input from stdin with a simple string promt 
 * message. The function will core dump on non integer input
 * IS RECURSIVE will return only when the input is right
 *
 * @param string msg Message to promt user with when inputing 
 *
 * @return Integer value from user
 */
int takeNaturalNumberInput(string msg) {
    int inputNumber = 0;
    cout << msg << " : ";
    cin >> inputNumber;

    //Check if user input is correct. If not call the function again
    if (inputNumber < 1) {
        cout << "Skaitlim jābūt naturālam" << endl;
        inputNumber = takeNaturalNumberInput(msg);
    }

    return inputNumber;

}

int main() {

    int userAnswer = 0; 

    /*
     * Take user input
     * compute the result
     * repeat untill user wants to exit
     */
    do {
        int number1 = takeNaturalNumberInput("Ievadiet pirmo skaitli");
        int number2 = takeNaturalNumberInput("Ieavdiet otro  skaitli");
        int answer = findLowestCommonMultiple(number1, number2);
        cout << "Mazākais kopīgais dalāmais ir : " << answer << endl;

        cout << "Ja vēlaties turpināt(0) vai beigt(1) programmas darbību : ";
        cin >> userAnswer;
        
    } while (userAnswer == 0);

    return 0;
}


