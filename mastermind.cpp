#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void main()
{
	int random[4],adivinha[4], i, contar = 0, contar2 = 0;

	srand(time(0));

	
	

	for (i = 0; i < 4; i++)
	{
		random[i] = rand() % 2;

		
	}
	do {
	for (i = 0; i < 4; i++)
	{
		cout << " mete 1 digito, sendo 1(preto) e 0(branco) ";

		cin >> adivinha[i];
	}
	for (i = 0; i < 4; i++)
	{
		if (adivinha[i] == random[i])
	{
		contar2 = contar2 + 1;
		
		}
		
	}

	if (contar2 < 4)
	{
		cout << "acertaste apenas " << contar2 << "tenta dnv" "\n";
			contar2 = 0;
			contar = contar + 1;
	}
	else 
	{
		cout << "parabens, acertaste todos os 4!" "\n";
	}
	
		
		
	
	} while (contar2 != 4);
	cout << "demorou " << contar << "vezes para conseguires adivinhar" "\n";

	
	

	
	
	
	
	

	
	

}