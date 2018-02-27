#include <iostream>
#include <chrono>
#include "BinSearch.h"

using namespace std;

int main() {
    long size, req;

	cout << "Size of sorted list: ";
	cin >> size;
	
	cout << "Requested number: ";
	cin >> req;

    long* numbers = new long[size];

    // This list is sorted
    for (long i = 0; i < size; i++) {
        numbers[i] = i;
    }

	auto start_time = std::chrono::high_resolution_clock::now();
	cout << "\nFound requested number: " << binSearch(numbers, size, req) << endl;
	auto end_time = std::chrono::high_resolution_clock::now();


	auto time = end_time - start_time;

	cout << "Time elapsed: " << std::chrono::duration_cast<std::chrono::microseconds>(time).count() << " microseconds" << endl;
    return 0;
}
