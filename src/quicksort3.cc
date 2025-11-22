//quicksort with 3 parameters (use after first iteration)
#include "myheaders.h"
void quicksort3(long data[], int first, int last) {

    if (first >= last)
        return;

    int lower = first + 1;
    int upper = last;

    swap(data[first], data[(first + last) / 2]);
    long bound = data[first];

    while (lower <= upper) {

        while (lower <= last && data[lower] < bound)
            lower++;

        while (upper >= first && data[upper] > bound)
            upper--;

        if (lower < upper)
            swap(data[lower++], data[upper--]);
        else
            lower++;
    }

    swap(data[first], data[upper]);

    quicksort3(data, first, upper - 1);
    quicksort3(data, upper + 1, last);
}





