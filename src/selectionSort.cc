//selection sort
//Author: Ashley Greening
//Created on 11/13/2025

//sorts the array from smallest element to largest element (ascending order)
#include "myheaders.h"

void selectionSort(long data[], int n) {

	//iterate though the array
	for (int i = 0,j,least; i < n-1; i++) {
		for (j = i+1, least = i; j < n; j++)

		//if the current element is smaller than the smallest element found so far, update least
			if (data[j] < data[least])
				least = j;

		//swap the smallest element with the element at the current position to put it in the correct spot of the sorted array
		swap(data[least],data[i]);
	}
}



