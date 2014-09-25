/*******************************
* Harjoitus 9
* Paulus Linna
* IIA14SB
* Tehtäväkuvaus:
*
*	Tee ohjelma, joka toimii laskimena.
*	Käyttäjältä kysytään kaksi kokonaislukua,
*	jonka jälkeen ohjelma antaa valikon
*	laskutoimituksista. Valikko nayttaa
*	seuraavalta:
*
*	VALIKKO
*	1. Summa
*	2. Erotus
*	3. Tulo
*	4. Osamaara
*	5. Jakojaannos
*
*	Lopuksi ohjelma tulostaa valitun tuloksen naytölle.
*
* Päivämäärä: 25.9.2014
* Versio: 1.0
*
********************************/

#include <iostream>
using namespace std;

float luku1;
float luku2;
int lasku;

void main()
{
	cout << "Anna kaksi kokonaislukua  ";
	cin >> luku1;
	cin >> luku2;

	cout << "VALIKKO\n1. Summa\n2. Erotus\n3. Tulo\n4. Osamaara\n5. Jakojaannos\n";
	cin >> lasku;

//Summa
	if (lasku == 1)
		cout << "Summa on " << luku1 + luku2;
		
//Erotus
	if (lasku == 2)
		cout << "Erotus on " << luku1 - luku2;

//Tulo
	if (lasku == 3)
		cout << "Tulo on " << luku1 * luku2;

//Osamaara
	if (lasku == 4)
		cout << "Osamaara on " << luku1 / luku2;

//Jakojaannos
	if (lasku == 5)
		cout << "Jakojaannos on " << (int)luku1 % (int)luku2;


}