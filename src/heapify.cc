/*
 * heapify.cc
 *
 *  Created on: Nov 22, 2025
 *      Author: sabrinaspyruce
 */

#include"myheaders.h"
#include<iostream>
using namespace std;

void heapify(long data[],int start, int end){
	int root = start;

	while(true){
		int leftSide = 2 * root + 1;
		if (leftSide > end){
			break;
		}

		int swapIndex = root;

		//check left side
		if(data[swapIndex] < data[leftSide]){
			swapIndex = leftSide;
		}

		// check right side if the left side has finished

		int rightSide = leftSide + 1;
		if(rightSide <= end && data[swapIndex] < data[rightSide]){
			swapIndex = rightSide;
		}

		// if root is at the largest, send her back
		if (swapIndex == root){
			break;
		}

		// swap root
		swap(data[root], data[swapIndex]);

		// continue sorting on down
		root = swapIndex;
	}
}



