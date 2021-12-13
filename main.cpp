#include "portocale.hpp"
#include "banana.hpp"
#include "nuci.hpp"
#include "morcovi.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Baza **v;
	v = new Baza*[10];
	Baza *aux;
	int auxi = 0;
	int pret_total = 0;
	int pret_total_portocale = 0;
	int sortare[10];
	
	v[0] = new Portocale(100,233);
	v[1] = new Banana(23);
	v[2] = new Nuci(53,876);
	v[3] = new Morcovi(131,43);
	v[4] = new Portocale(12,54);
	v[5] = new Banana(4);
	v[6] = new Nuci(2,56);
	v[7] = new Morcovi(6,3);
	v[8] = new Portocale(4,88);
	v[9] = new Banana(1);
	
	for ( int i = 0; i < 10 ; i++)
		v[i]->afisare();

	for ( int i = 0; i < 10 ; i++)
		pret_total=pret_total + v[i]->getPret();
	cout<<endl<<"pret total -->"<<pret_total;

	/// sortare Banana, Portocale,Morcovi, Nuci 
	for ( int i = 0; i < 10 ; i++){
		if( v[i]->isBanana() == true)
			sortare[i] = 40;
		else if( v[i]->isPortocale() == true)
			sortare[i] = 30;
		else if( v[i]->isMorcovi() == true)
			sortare[i] = 20;
		else sortare[i] = 10;	
	}
		cout <<endl<<"ordine:  ";
	for ( int i = 0; i < 10 ; i++)
	cout <<" "<< sortare[i];
	
	for(int i = 0 ;i < 9; i++)
    {
        for(int j = 0; j < 9-i; j++)
        {
            //checking if previous value is
            //grater than next one or not
            if(sortare[j] < sortare[j+1])
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                
                auxi = sortare[j];
                sortare[j] = sortare[j+1];
                sortare[j+1] = auxi;
            }
        }
    }
	
	cout << endl <<endl;
	for ( int i = 0; i < 10 ; i++)
		v[i]->afisare();
	cout<<endl;
	for ( int i = 0; i < 10 ; i++)
		cout<<" "<<sortare[i];
		
	cout<<endl;
	for ( int i = 0; i < 10 ; i++){
		if(v[i]->isPortocale() == true)
		pret_total_portocale=pret_total_portocale+v[i]->getPret();
	}
	cout<<endl<<"suma preturilor totale ale portocalelor este --> "<<pret_total_portocale;


		
	for ( int i = 0; i < 10 ; i++)
		delete v[i];
	delete []v;
	
	return 0;
}
