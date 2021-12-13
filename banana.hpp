#ifndef BANANA_HPP
#define BANANA_HPP

#include "baza.hpp"

class Banana: public Baza{ // pret final = pret bucata

	int pret_bucata;
public:
	Banana();
	Banana(int);
	void afisare();
	int getPret();
	bool isPortocale();
	bool isBanana();
	bool isNuci();
	bool isMorcovi();
};
#endif


