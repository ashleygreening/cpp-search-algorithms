//quicksort
//Author: Ashley Greening
//Created on 11/18/2025

//sorts the array from smallest element to largest element (ascending order)
#include "myheaders.h"

void quicksort(long data[], int n) {
    if (n < 2)
        return;

    int max = 0;
    for (int i = 1; i < n; i++)
        if (data[i] > data[max])
            max = i;

    swap(data[max], data[n - 1]);

    // sort the rest
    quicksort3(data, 0, n - 2);
}




