// BinHeapAndSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <random>

bool isSorted(const int N, int* arr) {
	for (int i = 1; i < N; i++) {
		if (arr[i - 1] > arr[i])
			return false;
	}
	return true;
}

void populateArray(const int N, int* arr) {
	typedef std::mt19937 rng_type;
	std::uniform_int_distribution<rng_type::result_type> udist(0, N);
	rng_type rng;
	for (int i = 0; i < N; i++) {
		arr[i] = udist(rng);
	}
}

void printArray(const int N, int* arr) {
	for (int i = 0; i < N; i++) {
		std::cout << arr[i];
		std::cout << ((i < N - 1) ? ", " : "\n");
	}
}

int main()
{
	int N = 0;
    std::cout << "This is test program for Binary Heap and Heap Sort!\n"; 
	std::cout << "Please enter size of array: ";
	std::cin >> N;
	int *arr = new int[N];
	populateArray(N, arr);

	std::cout << "Array is ";
	std::cout << (isSorted(N, arr) ? "sorted" : "not sorted");
	std::cout << "\n";
	printArray(N, arr);

	delete[] arr;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
