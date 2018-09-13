/*
 * Alberts Zemzāle, az18071
 * A32 Atrast divu naturāļu skaitļu m un n mazāko kopīgo dalāmo
 * Programma izveidota 13/09/2018
 */


#include <iostream>

using namespace std;

int findGreatestCommonDivider(int num1, int num2) {

    int largestNumber = num1 > num2 ? num1 : num2;
    int smallestNumber = num1 < num2 ? num1 : num2;
    bool gcdFound = false;

    int gcd = 0;
    int gcdDivider = smallestNumber;
    int gcdDivisable = largestNumber;

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

int findLeastCommonMultiple(int num1, int num2) {

    int greatestCommonDivider = findGreatestCommonDivider(num1, num2);
    int leastCommonMultiple = num1 * num2 / greatestCommonDivider;

    return leastCommonMultiple; 
}

int takeNaturalNumberInput(string msg) {
    int inputNumber = 0;
    cout << msg << " : ";
    cin >> inputNumber;

    if (inputNumber < 1) {
        cout << "Skaitlim jābūt naturālam" << endl;
        inputNumber = takeNaturalNumberInput(msg);
    }

    return inputNumber;

}

int main() {

    int userAnswer = 0; 

    do {
        int number1 = takeNaturalNumberInput("Ievadiet pirmo skaitli");
        int number2 = takeNaturalNumberInput("Ieavdiet otro  skaitli");
        int answer = findLeastCommonMultiple(number1, number2);
        cout << "Mazākais kopīgais dalāmais ir : " << answer << endl;

        cout << "Ja vēlaties turpināt(0) vai beigt(1) programmas darbību : ";
        cin >> userAnswer;
        
    } while (userAnswer == 0);
}


