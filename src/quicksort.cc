template<class T>
void quicksort(T data[], int n) {
    int i, max;
    if (n < 2)  //if the array has 1 or 0 elements, it's already sorted
        return;

    for (i = 1, max = 0; i < n; i++)  //find the largest element in the array
        if (data[max] < data[i])  //if the current element is larger, update max
            max = i;

    swap(data[n - 1], data[max]);  //put the largest element at the end of the array

    //sort the rest of the array (excluding the last element, which is in its final position)
    quicksort(data, 0, n - 2);  //use recursion
}



