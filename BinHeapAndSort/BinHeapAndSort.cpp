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

void hsSwim(const int N, int* arr, const int idx) {

}
void hsSink(const int N, int* arr, const int idx) {

}

void heapSort(const int N, int* arr) {

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
	std::cout << (isSorted(N, arr) ? "sorted\n" : "not sorted\n");
	printArray(N, arr);

	heapSort(N, arr);

	std::cout << "After Heapsort array is ";
	std::cout << (isSorted(N, arr) ? "sorted\n" : "not sorted\n");

	delete[] arr;
	return 0;
}