/***********************************************
*Harjoitus 4c
*Jouni Ylönen
*Kuvaus:
a) Kirjoita, tallenna ja suorita ym. ohjelma.
b) Kommentoi ylla olevan esimerkin kaikki rivit (mitä rivillä tapahtuu).
c) Muuta vakioden nimet niin, että
MAX => MINIMI
max => MAKSIMI

Muuta ohjelmaa niin, että voit tulostaa ohjelmalla seuraavat ilmoitukset:
Summa on pienempi kuin MINIMI
Summa on suurempi kuin MAKSIMI
Summa on MINIMIN ja MAKSIMIN välissä
*
*Versio: 1.0
*PVM: 3.9.2014
************************************************/

#include <iostream>
using namespace std;
#define MINIMI 10
const int MAKSIMI = 20;
int summa;
void Laske(int, int);

void main()
{
	int luku1 = 2;
	int luku2;
	cout << "Syötä luku: ";
	cin >> luku2;
	Laske(luku1, luku2);
	
	if (summa < MINIMI)
		cout << "Summa on pienempi kuin " << MINIMI
			<<"\n";
	
	if (summa > MAKSIMI)
		cout << "Summa on suurempi kuin " << MAKSIMI 
			<<"\n";
	
	if (MINIMI < summa)
	if (summa < MAKSIMI)
		cout << "Summa on "
		<< MINIMI
		<<" ja "
		<<MAKSIMI
		<<" välissä"
		<<"\n";
		
}

void Laske(int eka, int toka)
{
	summa = eka + toka;
}