#ifndef WARE_H_
#define WARE_H_
#include <iostream>

class Ware {
protected:
	std::string bezeichnung;
	int seriennummer;
	double gewicht;
	double einkaufspreis;
	double verkaufspreis;
public:
	Ware(std::string bezeichnung, int seriennummer, double gewicht, double einkaufspreis, double verkaufspreis);
	std::string getBezeichnung() const;
	int getSerial() const;
	double getWeight() const;
	double getBuyPrice() const;
	double getSellPrice() const;
	~Ware();

	friend std::ostream& operator<<(std::ostream& out, Ware& ware){
		//out << ware.getBezeichnung() << " \t(Seriennummer: " << ware.getSerial() << ", \tGewicht: " << ware.getWeight() << ", \tEinkaufspreis: " << ware.getBuyPrice() << ", \tVerkaufspreis " << ware.getSellPrice() << ")";
		out << ware.getBezeichnung() << " \t(\tSeriennummer: " << ware.getSerial() << " \tGewicht: " << ware.getWeight() << " \tEinkaufspreis: " << ware.getBuyPrice() << " \tVerkaufspreis " << ware.getSellPrice() << "\t)";
		out.flush();
		return out;
	}
};



#endif /* WARE_H_ */
