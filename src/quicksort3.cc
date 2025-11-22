//quicksort with 3 parameters (use after first iteration)
#include "myheaders.h"
void quicksort3(long data[], int first, int last){
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
		quicksort3(data, first, upper-1);
	if(upper+1 < last)
		quicksort3(data, upper+1, last);
}



