#ifndef BAZA_HPP
#define BAZA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Baza{
public:
	
	virtual void afisare() = 0;
	virtual ~Baza() = 0;
	
	virtual bool isPortocale() = 0;
	virtual bool isNuci() = 0;
	virtual bool isBanana() = 0;
	virtual bool isMorcovi() = 0;
	
	virtual int  getPret() = 0;
};

#endif

