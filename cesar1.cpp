#include <iostream>
int main()
{

	using namespace std;
	char alfabeto[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' }, frase[134];
	int TLM, i, devol, L, j;
	cout << "Diz me o numero de linhas que queres andar";
	cin >> TLM;

	cout << "Quantas letras tem? ";
	cin >> L;
	cout << "Diz me a frase que queres que o cesar traduza";
	for (i = 0; i < L; i++)
	{
		cin >> frase[i];
	}
	for (i = 0; i < L; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (frase[i] == alfabeto[j])
			{
				if (j + TLM > 25)
				{
					cout << alfabeto[(j + TLM) % 26];
				}
				else
				{
					cout << alfabeto[j + TLM];
				}
			}
		}
	}
}