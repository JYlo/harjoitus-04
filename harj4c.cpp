/***********************************************
*Harjoitus 4c
*Jouni Yl�nen
*Kuvaus:
a) Kirjoita, tallenna ja suorita ym. ohjelma.
b) Kommentoi ylla olevan esimerkin kaikki rivit (mit� rivill� tapahtuu).
c) Muuta vakioden nimet niin, ett�
MAX => MINIMI
max => MAKSIMI

Muuta ohjelmaa niin, ett� voit tulostaa ohjelmalla seuraavat ilmoitukset:
Summa on pienempi kuin MINIMI
Summa on suurempi kuin MAKSIMI
Summa on MINIMIN ja MAKSIMIN v�liss�
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
	cout << "Sy�t� luku: ";
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
		<<" v�liss�"
		<<"\n";
		
}

void Laske(int eka, int toka)
{
	summa = eka + toka;
}