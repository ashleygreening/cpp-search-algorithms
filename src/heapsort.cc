/*
 * heapsort.cc
 *
 *  Created on: Nov 22, 2025
 *      Author: sabrinaspyruce
 */

#include"myheaders.h"
#include<iostream>
using namespace std;

void heapSort(long data[],int size){
	for (int i = size/2 - 1; i >= 0; --i){
		heapify(data, i, size-1);	// create a heap
	}
	for (int i = size - 1; i >= 1; --i){
		swap(data[0], data[i]);	// move largest item to data [i]
		heapify(data, 0, i-1);	// return into heap form
	}
}
