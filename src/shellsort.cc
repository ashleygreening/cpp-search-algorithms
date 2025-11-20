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
	while(h>1){
		long * subarray=new long[size/h];
		for(int i=0;(size/h)>i;i++){
			subarray[i]=array[i*h];
		}
		cout<<"starting InsertionSort \n";
		InsertionSort(subarray,(size/h));
		for(int i=0;(size/h)>i;i++){
			array[i*h]=subarray[i];

		}
		if(h>4){
			h=(h-1)/3;
		}
		else{
			h=h/2;
		}


	}
	for(int i=1;i<size;i++){
		if(array[i]>array[i-1]){
			swap(array[i],array[i-1]);
		}
	}
	return;
}





