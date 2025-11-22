/*
 * countingsort.cc
 *
 *  Created on: Nov 11, 2025
 *      Author: Sabrina Damien
 */
//I thought it was a memory allocation so I added the deletes to free the memory at the end but that didn't fix the problem
//However I do think those still need to be added so I left them for now

#include "myheaders.h"

void countingSort(long data[], int n) {
	long i;
	long largest = data[0];
	long *tmp = new long[n];
	for (i = 1; i < n; i++) // find the largest number
		if (largest < data[i]){ // in data and create the array
			largest = data[i]; // of counters accordingly;
		}

	unsigned long *count = new unsigned long[largest+1];

	for (i = 0; i <= largest; i++){
		count[i] = 0;
	}
	for (i = 0; i < n; i++){ // count numbers in data[];
		count[data[i]]++;
	}

	count[i] = count[i-1] + count[i];

	for (i = n-1; i >= 0; i--) { // put numbers in order in tmp[];
		tmp[count[data[i]]-1] = data[i];
		count[data[i]]--;
	}

	for (i = 0; i < n; i++){// transfer numbers from tmp[]
		data[i] = tmp[i];
	}
	delete[] tmp;
	delete[] count;


	return;
}
