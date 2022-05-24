#ifndef ALGORITHMS_H_
#define ALGORITHMS_H_
#include "Ware.h"

//QUICKSORT
void quicksort(Ware* waren[]);
int qsPartition (Ware* waren[], int left, int right);
void quicksortAlgo(Ware* waren[], int left, int right);

//BUBBLESORT
void bubblesort(Ware* waren[]);

//INSERTSORT
void insertsort1(Ware* waren[]);
void insertsort2(Ware* waren[]);

//MERGESORT
void mergesort(Ware* waren[]);
void merge(Ware* waren[], int left, int middle, int right);
void mergesortAlgo(Ware* waren[], int left, int right);

#endif
