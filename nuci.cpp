#include "nuci.hpp"

Nuci::Nuci():cantitate(0),pret_100_grame(0){}

Nuci::Nuci(int cantitate,int pret_100_grame):cantitate(cantitate),pret_100_grame(pret_100_grame){}

void Nuci::afisare(){
	cout << "Nuci , pret final ->> " << cantitate*pret_100_grame << endl;
}
int Nuci::getPret(){
	int	a = cantitate*pret_100_grame;
	return a;
}


bool Nuci::isNuci(){
	return true;
}
bool Nuci::isPortocale(){
	return false;
}
bool Nuci::isBanana(){
	return false;	
}
bool Nuci::isMorcovi(){
	return false;
}
