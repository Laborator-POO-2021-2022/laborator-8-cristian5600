#ifndef MORCOVI_HPP
#define MORCOVI_HPP

#include "baza.hpp"

class Morcovi: public Baza{ // pretul final = cantitate/pret_100_grame

	int cantitate; // in grame
	int pret_100_grame;
public:

	Morcovi();
	Morcovi(int,int);
	void afisare();
	int getPret();
	bool isPortocale();
	bool isBanana();
	bool isNuci();
	bool isMorcovi();
};
#endif

