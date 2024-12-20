#include <iostream>
#include <string>
void main()
{
	using namespace std;
	int escolha, letras, i;
	char frase[130], abc[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	string morse[26] = {
	".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
	"-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
	"..-", "...-", ".--", "-..-", "-.--", "--.."
	}, morse2[26];
	cout << "Quantas letras tem a frase ";
	cin >> letras;
	cout << "Queres traduzir (1) para codigo morse,clica (2) para portugues.";
	cin >> escolha;
	int j;
	switch (escolha)
	{
	case 1:
		cout << "Diz me a frase que queres traduzir ";
		for (i = 0; i < letras; i++)
		{
			cin >> frase[i];
			for (j = 0; j < 26; j++)
			{
				if (frase[i] == abc[j])
				{
					cout << morse[j] << " ";
				}
			}
		}break;
	case 2:
		cout << "Diz a frase que queres traduzir para portugues.";
		for (i = 0; i < letras; i++)
		{
			cin >> morse2[i];
			for (j = 0; j < 26; j++)
			{
				if (morse2[i] == morse[j])
				{
					cout << abc[j];
				}
			}
		}break;

	}
}