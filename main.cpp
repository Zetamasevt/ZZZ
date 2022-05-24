#include <iostream>
using namespace std;

#include "Sortiment.h"

int main() {

	cout << "Programm startet." << endl << endl;
	Sortiment mySortiment;

	mySortiment.addWare(new Ware("Brot", 6541, 0.32, 0.1, 0.99));
	mySortiment.addWare(new Ware("Honig", 7892, 0.40, 0.8, 3.69));
	mySortiment.addWare(new Ware("Milch", 3213, 1.00, 0.75, 1.99));
	mySortiment.addWare(new Ware("Butter", 5464, 0.50, 0.4, 1.79));
	mySortiment.addWare(new Ware("Jogurt", 7855, 0.40, 0.3, 1.10));
	mySortiment.addWare(new Ware("Bier", 8856, 0.33, 0.4, 2.39));
	mySortiment.addWare(new Ware("Wein", 6667, 0.75, 6.5, 14.99));
	mySortiment.addWare(new Ware("Saft", 8528, 1.50, 0.9, 2.75));
	mySortiment.addWare(new Ware("Tabak", 7489, 0.15, 2.2, 5.60));
	mySortiment.addWare(new Ware("Schoko", 1210, 0.20, 1.2, 2.99));
	//mySortiment.addWare(new Ware("Katzenfutter", 11, 0.6, 0.2, 1.75));

	mySortiment.showWares();

	mySortiment.sort(4);
	mySortiment.showWares();

	mySortiment.sort(5);
	mySortiment.showWares();

	mySortiment.sort(2);
	mySortiment.showWares();

	mySortiment.sort(3);
	mySortiment.showWares();

	mySortiment.sort(1);
	mySortiment.showWares();

	cout << endl << "Programm wird beendet." << endl << endl;
	return 0;
}
