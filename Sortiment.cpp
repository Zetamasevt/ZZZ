#include "Sortiment.h"

Sortiment::Sortiment(){
	//std::cout << "Sortiment: Konstruktor aufgerufen." << std::endl;
}

Sortiment::~Sortiment(){
	//std::cout << "Sortiment: Destruktor aufgerufen." << std::endl;
	for (int i = 0; i<10; i++){
		if (waren[i] != nullptr){
			delete waren[i];
		}
	}
}

void Sortiment::showWares(){
	std::cout << std::endl << "Diese Waren befinden sich im Sortiment: " << std::endl;
	for (int i = 0; i<10; i++){
			if (waren[i] != nullptr){
				std::cout << i+1 << ":\t" << *waren[i] << std::endl;
			}
		}
}

void Sortiment::addWare(Ware* ware){
	for (int i = 0; i<10; i++){
		if (waren[i] == nullptr){
			waren[i] = ware;
			std::cout << ware->getBezeichnung() << " wird dem Sortiment hinzugefuegt." << std::endl;
			return;
		}
	}
	std::cout << "Sortiment ist voll." << std::endl;
}

void Sortiment::sort(int modus){
	if (modus == 1){
		std::cout << std::endl << "Sortiment wird sortiert nach Seriennummer." << std::endl;
		quicksort(waren);
	}
	else if (modus == 2){
		std::cout << std::endl << "Sortiment wird sortiert nach Gewicht." << std::endl;
		bubblesort(waren);
	}
	else if (modus == 3){
		std::cout << std::endl << "Sortiment wird alphabetisch sortiert." << std::endl;
		mergesort(waren);
	}
	else if (modus == 4){
		std::cout << std::endl << "Sortiment wird sortiert nach Einkaufspreis." << std::endl;
		insertsort1(waren);
	}
	else if (modus == 5){
		std::cout << std::endl << "Sortiment wird sortiert nach Verkaufspreis." << std::endl;
		insertsort2(waren);
	}
	else std::cout << std::endl << "Ungueltiger Modus ausgewaehlt" << std::endl;
}






