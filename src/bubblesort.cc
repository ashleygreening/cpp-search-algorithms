/*
 * bubblesort.cc
 *
 *  Created on: Nov 11, 2025
 *      Author: Sabrina Damien
 */

#include "myheaders.h"

template<class T>
void bubbleSort(T data[], int n) { 			// Take the data array given (data[]) & the size of it (n)
	for (int i = 0; i < n-1; i++){
		for (int j = n-1; j > i; --j){
			if (data[j] < data[j-1]){  		// If the current iteration of data is less than the previous iteration
				swap(data[j],data[j-1]);	// Swap the two points of data
			}
		}
	}
	return;									// End (go back to main)
}
