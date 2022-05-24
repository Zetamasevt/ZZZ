#include "Ware.h"

Ware::Ware(std::string bezeichnung, int seriennummer, double gewicht, double einkaufspreis, double verkaufspreis) : bezeichnung(bezeichnung), seriennummer(seriennummer), gewicht(gewicht), einkaufspreis(einkaufspreis), verkaufspreis(verkaufspreis){
	//std::cout << bezeichnung << ": Konstruktor aufgerufen." << std::endl;
}

std::string Ware::getBezeichnung() const{
	return bezeichnung;
}

int Ware::getSerial() const{
	return seriennummer;
}

double Ware::getWeight() const{
	return gewicht;
}

double Ware::getBuyPrice() const{
	return einkaufspreis;
}

double Ware::getSellPrice() const{
	return verkaufspreis;
}

Ware::~Ware(){
	//std::cout << bezeichnung << ": Destruktor aufgerufen." << std::endl;
}




