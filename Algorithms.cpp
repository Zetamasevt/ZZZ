#include "Algorithms.h"

void bubblesort(Ware* waren[]){
	std::cout << "BUBBLESORT!" << std::endl;
	for (int n = 10; n>1; --n){
		for (int i = 0; i<n-1; ++i){
			if (waren[i]->getWeight() > waren[i+1]->getWeight()){
				Ware* temp = waren[i];
				waren[i] = waren[i+1];
				waren[i+1] = temp;
			}
		}
	}
}

void insertsort1(Ware* waren[]){
	std::cout << "INSERTIONSORT!" << std::endl;
	int i,j;
	for (i = 1; i<10; i++){
		Ware* temp = waren[i];
		j = i;
		while (j>0 && waren[j-1]->getBuyPrice() > temp->getBuyPrice()){
			waren[j] = waren[j-1];
			j--;
			}
		waren[j] = temp;
	}
}

void insertsort2(Ware* waren[]){
	std::cout << "INSERTIONSORT!" << std::endl;
	int i,j;
	for (i = 1; i<10; i++){
		Ware* temp = waren[i];
		j = i;
		while (j>0 && waren[j-1]->getSellPrice() > temp->getSellPrice()){
			waren[j] = waren[j-1];
			j--;
			}
		waren[j] = temp;
	}
}

void mergesort(Ware* waren[]){
	std::cout << "MERGESORT!" << std::endl;
	mergesortAlgo(waren, 0, 9);
}

void merge(Ware* waren[], int left, int middle, int right){
	int n1 = middle -left +1;
	int n2 = right - middle;
	Ware* leftWaren[n1];
	Ware* rightWaren[n1];
	for (int i = 0; i<n1; i++){
		leftWaren[i] = waren[left + i];
	}
	for (int j = 0; j<n2; j++){
		rightWaren[j] = waren[middle + j +1];
	}
	int k = 0, l = 0;
	int m = left;
	while (k<n1 && l<n2){
		if (leftWaren[k]->getBezeichnung() <= rightWaren[l]->getBezeichnung()){
			waren[m] = leftWaren[k]; k++;
		}
		else{
			waren[m] = rightWaren[l]; l++;
		}
		m++;
	}
	while (k<n1){
		waren[m] = leftWaren[k];
		k++;
		m++;
	}
	while (l<n2){
		waren[m] = rightWaren[l];
		l++;
		m++;
	}
}

void mergesortAlgo(Ware* waren[], int left, int right){
	if(left < right){
		int middle = left+(right-left)/2; // Finde die Mitte
		mergesortAlgo(waren, left, middle); // Sortiere 1. Haelfte
		mergesortAlgo(waren, middle+1, right); // Sortiere 2. Haelfte
		merge(waren, left, middle, right);
	}
}

void quicksort(Ware* waren[]){
	std::cout << "QUICKSORT!" << std::endl;
	quicksortAlgo(waren, 0, 9);
}

int qsPartition (Ware* waren[], int left, int right){
	Ware* pivot = waren[right];
	int indexSmaller = (left - 1);
	for (int i = left; i <= right - 1; i++){
		if (waren[i]->getSerial() < pivot->getSerial()){
			indexSmaller++;
			Ware* temp = waren[indexSmaller];
			waren[indexSmaller] = waren[i];
			waren[i] = temp;
			}
		}
	Ware* temp = waren[indexSmaller +1];
	waren[indexSmaller +1] = waren[right];
	waren[right] = temp;
	return (indexSmaller + 1);
	}

void quicksortAlgo(Ware* waren[], int left, int right){
	if (left < right){
		int parInd = qsPartition(waren, left, right);
		quicksortAlgo(waren, left, parInd - 1);
		quicksortAlgo(waren, parInd + 1, right);
		}
	}


