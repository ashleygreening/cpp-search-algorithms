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
void	bubbleSort(long data[], long size); 			// sortA
void	mergesort(long data[], long first, long last);
void	merge(long d[], long first, long last);// sortB
void    InsertionSort(long data[],long size);
void    Insert(long data[],long size,long start,long stop);// sortC
void    selectionsort(T data[], int n);



