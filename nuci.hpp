#ifndef NUCI_HPP
#define NUCI_HPP

#include "baza.hpp"

class Nuci: public Baza{ // pretul final = cantitate/pret_100_grame

	int cantitate; // in grame
	int pret_100_grame;
public:
	Nuci();
	Nuci(int,int);
	void afisare();
	int getPret();
	bool isPortocale();
	bool isBanana();
	bool isNuci();
	bool isMorcovi();
};
#endif


