
#include<iostream>
#include "myheaders.h"
using namespace std;

void Insert(long array[],int size,int start,int stop){
	long Needed=array[stop];

	for(int i=stop;i>=start;--i){
		array[i]=array[i-1];
	}

	array[start]=Needed;

}


void InsertionSort(long array[],int size){
	for(int i=0;i<size;i++){
		int j=0;
		while(array[j]<array[i]){
			j++;
		}
		Insert(array,size,j,i);

	}


	return;

}
