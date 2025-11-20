// DO NOT forget to add the prototypes for your ASort, BSort, and other functions below!


#include <string>
#include <unistd.h>
#define MAXSIZE	 2100000

using namespace std;

void	printmenu();
void	printarray(long data[], long size);
int		readfile(string infilename, long data[]);
int		writefile(long data[], long size, string outfilename);
void	swap(long& x, long& y);
void	bubbleSort(long data[], long size);
void    countingSort(long data[],long size);
void	mergesort(long data[], long first, long last);
void	merge(long d[], long first, long last);
void    InsertionSort(long data[],long size);
void    Insert(long data[],long size,long start,long stop);

template <class T>
void    selectionSort(T data[], int n);

template<class T>
void	bubbleSort(T data[], long size);

template<class T>
void	countingSort(T data[], long size);

template<class T>
void quicksort(T data[], int n);



