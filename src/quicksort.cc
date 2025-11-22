//quicksort
//Author: Ashley Greening
//Created on 11/18/2025

//sorts the array from smallest element to largest element (ascending order)
#include "myheaders.h"

void quicksort(long data[], int first, int last){ //function overloading
	int lower = first + 1, upper = last;
	swap(data[first], data[(first + last)/2]);
	long bound = data[first];
	while(lower <= upper){
		while(bound > data[lower])
			lower++;
		while(bound < data[upper])
			upper--;
		if(lower < upper)
			swap(data[lower++], data[upper--]);
		else lower++;
	}
	swap(data[upper], data[first]);
	if(first < upper-1)
		quicksort(data, first, upper-1);
	if(upper+1 < last)
		quicksort(data, upper+1, last);
}


void quicksort(long data[], int n){
    int i, max;
    if (n < 2)  //if the array has 1 or 0 elements, it's already sorted
        return;

    for (i = 1, max = 0; i < n; i++)  //find the largest element in the array
        if (data[max] < data[i])  //if the current element is larger, update max
            max = i;

    swap(data[n - 1], data[max]);  //put the largest element at the end of the array

    //sort the rest of the array (excluding the last element, which is in its final position)
    quicksort(data, 0, n - 2);  //use recursion
}



