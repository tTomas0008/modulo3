#include <iostream>
using namespace std;
void main()
{
	int array1[10], array2[10],array3[20],i,j,l;

	for (i = 0; i < 10; i++)
	{
		cout << "qual vai ser o " << i + 1 << " numero do primeiro array? ";
		cin >> array1[i];
	}

	for (i = 0; i < 10; i++)
	{
		cout << "qual vai ser o " << i + 1 << " numero do primeiro array? ";
		cin >> array2[i];
	}

	for (i = 0; i < 10; i++)
	{
		array3[i * 2] = array1[i];
		array3[i * 2 + 1] = array2[i];
	}
	for (i = 0; i < 20; i++)
	{
cout << array3[i] << "\n";
	}
	
	
}