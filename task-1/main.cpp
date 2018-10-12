/*
 * Alberts Zemzāle, az18071
 * A32 Atrast divu naturālu skaitļu m un n mazāko kopīgo dalāmo
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
    bool correctInput = false;

    //Ask for user input until the number inputed is natural
    do{
        cout << msg << " : ";
        cin >> inputNumber;
        if (inputNumber < 0) {
            cout << "Number must be natural" << endl;
        } else {
            correctInput = true;
        }
    }while(!correctInput);

    return inputNumber;

}

int main() {

    int userAnswer = 0;

    /*
     * Take user input
     * compute the result
     * repeat until user wants to exit
     */
    do {
        int number1 = takeNaturalNumberInput("Input first number");
        int number2 = takeNaturalNumberInput("Input second number");
        int answer = 0;
        if (number1 == 0 || number2 == 0) {
            answer = 0;
        } else {
            answer = findLowestCommonMultiple(number1, number2);
        }

        cout << "Least common multiple : " << answer << endl;

        cout << "Continue(0) or exit(1) : ";
        cin >> userAnswer;

    } while (userAnswer == 0);

    return 0;
}




