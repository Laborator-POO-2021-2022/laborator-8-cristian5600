#include "portocale.hpp"

Portocale::Portocale():nr_kilograme(0),pret_kg(0){}

Portocale::Portocale(int nr_kilograme,int pret_kg):nr_kilograme(nr_kilograme),pret_kg(pret_kg){}

void Portocale::afisare(){
	cout << "Portocale , pret final -> " << pret_kg*nr_kilograme << endl;
}
int Portocale::getPret(){
	int a=pret_kg*nr_kilograme;
	return a;
}

bool Portocale::isPortocale(){
	return true;
}
bool Portocale::isNuci(){
	return false;
}
bool Portocale::isBanana(){
	return false;	
}
bool Portocale::isMorcovi(){
	return false;
}
