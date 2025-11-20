/*
 * ShellSort.cc
 *
 *  Created on: Nov 13, 2025
 *      Author: leslie-merrill
 */
#include"myheaders.h"
#include<iostream>
using namespace std;

void ShellSort(long array[],int size){
	int h=0;
	while(h<size){
		h=(3*h)+1;
	}
	h=(h-1)/3;
	while(h>0){
		long * subarray=new long[size/h];
		for(int i=0;(size/h)>i;i++){
			subarray[i]=array[i*h];
		}
			InsertionSort(subarray,(size/h));
		for(int i=0;(size/h)>i;i++){
			array[i*h]=subarray[i];
		}
		h=(h-1)/3;
		cout<<"Value of H is: "<<h<<"\n";


	}
	return;
}





