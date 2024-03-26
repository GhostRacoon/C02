#include <iostream>
using namespace std;

	int main()
	{
		int i;
		int pares = 0;
		int valor, resto;
		
		for (i =0; i < 5; i++)
		{
			cin >> valor;
			resto = valor % 2;
			
			if (resto == 0)
			{
				pares++;
			}
			
		}
	
		cout << pares << " valores pares" << endl;
		
		return 0;	
	}
