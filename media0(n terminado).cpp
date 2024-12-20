#include <iostream>
#include <string>

using namespace std;

void main()
{
	int Notas[99][99];
	int NA, NM, i, j, somar = 0, somar2 = 0;
	string materia[999], Nalunos[999];

	cout << "quantas materias tens?";
	cin >> NM;

	cout << "quantos alunos a tua turma tem?";
	cin >> NA;

	for (i = 0; i < NM; i++)
	{
		cout << " qual e a " << i + 1 << " materia? " "\n";
		cin >> materia[i];

	}
	for (i = 0; i < NA; i++)
	{
		cout << " qual o nome do " << i + 1 << " aluno " "\n";
		cin >> Nalunos[i];

	}

	for (i = 0; i < NA; i++)
	{
		for (j = 0; j < NM; j++)
		{
			cout << " que nota teve o " << Nalunos[i] << " a " << materia[j] << "\n";
			cin >> Notas[i][j];
			somar = somar + Notas[i][j];
		}
		
	}
	
	for (i = 0; i < NA; i++)
	{
		for (j = 0; j < NM; j++)
		{
			cout << " as notas que o " << Nalunos[i] << " teve a " << materia[j] << "foi" << Notas[i][j] << "\n";
		}
		
		
	}
	for (j = 0; j < NM; j++)
	{
		for (i = 0; i < NA; i++)
			cout << " a media da materia " << materia[j] << " foi " << Notas[i][j] / NA << "\n";
	}

}