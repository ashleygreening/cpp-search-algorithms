
#include<iostream>
#include "myheaders.h"
using namespace std;
//Subroutine to be called whenever the InsertionSort function determines that a value needs to be changed
void Insert(long array[],int size,int start,int stop){
	long Needed=array[stop];

	for(int i=stop;i>=start;--i){
		array[i]=array[i-1];
	}

	array[start]=Needed;

}


void InsertionSort(long array[],int size){
	//Checks the first element of the array and compares it to all subsequent elements to see if anything needs to be moved in front of it.
	for(int i=0;i<size;i++){
		int j=0;
		//Increases the index of the first value in the array to compare up until one less than the selected value is found
		while(array[j]<array[i]){
			j++;
		}
		Insert(array,size,j,i);//Inserts the correct value into the correct spot

	}


	return;

}
