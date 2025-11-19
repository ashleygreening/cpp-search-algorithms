


void Insert(long array[],long size,long start,long stop){
	long Needed=array[stop];

	for(int i=stop;i>=start;--i){
		array[i]=array[i-1];
	}

	array[start]=Needed;

}


void InsertionSort(long array[],long size){
	for(long i=0;i<size;i++){
		int j=0;
		while(array[j]<array[i]){
			j++;
		}
		Insert(array,size,j,i);

	}


	return;

}
