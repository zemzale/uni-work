/*
 * Author : Alberts Zemzale AZ18071
 * Doti divi veselu skaitïu masîvi A(m) un B(n). Atrast lielâko tâdu elementu masîvâ A, kurð nav atrodams masîvâ B.
 */

#include <iostream>
#include <array>
#include <iterator>


//Return a pointer for an array from user input
int* getUserArray(int arraySize) {
	int* array = new int[arraySize];
	for (int i = 0; i < arraySize; i++) {
		int number = 0;
		std::cout << "Input number for array  : ";
		std::cin >> number;
		
		array[i] = number;
	}
	return array;
}

//Print out the biggest number from array 1 that isn't in array 2
void getBiggestDiffNumber(int* pArray1, int* pArray2, int arraySize) {
	
	int diffNumber = 0;
	bool diffFound = false;

	//Iterate over array 1 and compare the numbers with conentns of array 2
	for(int i = 0; i < arraySize; i++) {
		bool arrayContains = false;
		int j = 0;
		while(j < arraySize) {
			//compare the values, if it contains the values then we exit out of the loop
			if (pArray1[i] == pArray2[j]) {
				arrayContains = true;	
				j = arraySize;
			}
			j++;
		}
		//check if need to change diff number
		if (!arrayContains && (!diffFound || diffNumber < pArray1[i])) {
			diffFound = true;
			diffNumber = pArray1[i];
		}
	}
	
	//Print out final values
	if (diffFound) {
		std::cout << "Biggest number in array 1 that is not in array 2 : " << diffNumber << std::endl;			
	} else {
		std::cout << "There is no such a number that is in array 1 that isn't in array 2" << std::endl;
	}
}

int main() {
	
	int continueExecution = 0;
	
	do {
		continueExecution = 0;
		int arraySize = 0;
		
		std::cout << "What is the size of the array you want to make?";
		std::cin >> arraySize;
		
		//Check if array size is correct
		if (arraySize > 0) {
			
			//Get arrays
			std::cout << "Fill array 1" << std::endl;
			int* pArray1 = getUserArray(arraySize);
			std::cout << "Fill array 2" << std::endl;
			int* pArray2 = getUserArray(arraySize);
			
			//Execute programm logic
			getBiggestDiffNumber(pArray1, pArray2, arraySize);
			
			//Clean up
			delete pArray1;
			delete pArray2;
			
		} else {
			std::cout << "The array needs to be bigger then 0!" << std::endl;
			continueExecution = 1;
			continue;
		}
		
		
		std::cout << "Do you want to continue (1) or exit (0) ?" << std::endl;
		std::cin >> continueExecution;
	}while (continueExecution);
	




    return 0;
}



