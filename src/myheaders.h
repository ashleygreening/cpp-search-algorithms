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
void    InsertionSort(long data[],int size);
void    Insert(long array[],int size,int start,int stop);
void    ShellSort(long array[],int size);

void	selectionSort(long data[], int n);
void 	quicksort(long data[], int n);



