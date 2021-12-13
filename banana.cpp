#include "banana.hpp"

Banana::Banana():pret_bucata(0){}

Banana::Banana(int pret_bucata):pret_bucata(pret_bucata){}

void Banana::afisare(){
	cout << "Banana , pret/bucata= " << pret_bucata <<endl;
}

int	Banana::getPret(){
	int	a=pret_bucata;
	return a;
}

bool Banana::isPortocale(){
	return false;
}
bool Banana::isNuci(){
	return false;
}
bool Banana::isBanana(){
	return true;	
}
bool Banana::isMorcovi(){
	return false;
}
