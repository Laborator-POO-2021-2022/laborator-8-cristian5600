#include "morcovi.hpp"

Morcovi::Morcovi():cantitate(0),pret_100_grame(0){}

Morcovi::Morcovi(int cantitate,int pret_100_grame):cantitate(cantitate),pret_100_grame(pret_100_grame){}

void Morcovi::afisare(){
	cout << "Morcovi , pret final --> " << cantitate*pret_100_grame << endl;
}

int Morcovi::getPret(){
	int	a=cantitate*pret_100_grame;
	return a;
}
bool Morcovi::isMorcovi(){
	return true;
}
bool Morcovi::isPortocale(){
	return false;
}
bool Morcovi::isBanana(){
	return false;	
}
bool Morcovi::isNuci(){
	return false;
}
