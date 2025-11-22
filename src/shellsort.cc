/*
 * ShellSort.cc
 *
 *  Created on: Nov 13, 2025
 *      Author: leslie-merrill
 *      Shell sort is a more efficient modification of insertion sort that creates
 *      progressively larger subarrays and sorts those so that once the final insertion sort runs, it is already mostly sorted making it more efficient
 */
#include"myheaders.h"
#include<iostream>
using namespace std;

void ShellSort(long array[],int size){
	//Calculates the first interval of elements to elements to be sorted by dividing the size by 4
	int h=size/4;
	//Has the algorithm run up until the array has every element sorted
	while(h>0){
		//Creates and load values into a subarray
		long * subarray=new long[size/h];
		for(int i=0;(size/h)>i;i++){
			subarray[i]=array[i*h];
		}
		//sorts the subarray using a standard Insertion Sort
		InsertionSort(subarray,(size/h));
		//Loads the sorted values back into their correct place
		for(int i=0;(size/h)>i;i++){
			array[i*h]=subarray[i];

		}
		delete[] subarray;
		h=h/2;



	}

	return;
}





