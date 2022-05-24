#ifndef SORTIMENT_H_
#define SORTIMENT_H_
#include "Ware.h"
#include "Algorithms.h"

class Sortiment {
private:
	Ware* waren[10] = {};
public:
	Sortiment();
	~Sortiment();
	void showWares();
	void addWare(Ware* ware);
	void sort(int modus);
};



#endif
