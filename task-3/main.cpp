/*
 * Author : Alberts Zemzale AZ18071
 * Doti divi veselu skaitļu masīvi A(m) un B(n). Atrast lielāko tādu elementu masīvā A, kurš nav atrodams masīvā B.
 */

#include <iostream>
#include <array>
#include <iterator>



int main() {

    std::array<int, 7> array1 = {1, 2, 3, 23, 45, 23432, 1};
    std::array<int, 7> array2 = {0, 2, 3, 4, 23, 1, 45};
    int diffNumber = 0;
    

    for(auto it = array1.begin(); it != array1.end(); ++it) {
        bool arrayContains = false;
        auto ij = array2.begin();
        while(ij != array2.end()) {
            if (*ij == *it) {
                arrayContains = true;
            }
            ij++;
        }
        if (diffNumber < *it && !arrayContains) {
            diffNumber = *it;
        }
    }

    std::cout << diffNumber << std::endl;

    return 0;
}



