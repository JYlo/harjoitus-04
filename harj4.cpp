/***********************************************
*Harjoitus 4
*Jouni Ylˆnen
*Kuvaus:
a) Kirjoita, tallenna ja suorita ym. ohjelma.
b) Kommentoi ylla olevan esimerkin kaikki rivit (mit‰ rivill‰ tapahtuu).
c) Muuta vakioden nimet niin, ett‰
MAX => MINIMI
max => MAKSIMI

Muuta ohjelmaa niin, ett‰ voit tulostaa ohjelmalla seuraavat ilmoitukset:
Summa on pienempi kuin MINIMI
Summa on suurempi kuin MAKSIMI
Summa on MINIMIN ja MAKSIMIN v‰liss‰
*
*Versio: 1.0
*PVM: 3.9.2014
************************************************/

#include <iostream> // M‰‰ritt‰‰ in/out komennot
using namespace std; // Standardin nimiavaruus

#define MAX 10 //vakioiden m‰‰rittely
const int max = 20; //uusi suositeltava tapa m‰‰rittelyyn

int summa;//julkisten muuttujien esittely
void Laske(int, int);//esitell‰‰n aliohjelma
void main()//p‰‰ohjelma alkaa t‰st‰
{//alkava lohkosulku
	//paikallisten muuttujien m‰‰rittely
	int luku1 = 2;
	int luku2;
	cout << "Syˆt‰ luku: ";//aliohjelman kutsu
	cin >> luku2;
	Laske(luku1, luku2);
	if (summa < MAX)
		cout << "Summa on pienempi kuin " << MAX;
	if (summa < max)
		cout << "Summa on pienempi kuin " << max;
}//p‰‰ohjelma loppuu t‰h‰n
void Laske(int eka, int toka)//aliohjelman m‰‰rittely
{
	summa = eka + toka;
}