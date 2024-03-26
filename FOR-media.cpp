#include <iostream>
#include <iomanip>
using namespace std;

	int main()
	{
		
		float numero;
		int i;
		int positivos = 0;
		float media, soma = 0;
		
		for (i = 0; i < 6; i++)
		{
			cin >> numero;
			
			if (numero > 0)
			{
				positivos++;
				soma = soma + numero;
			}
		}
		cout << positivos << " valores positivos" << endl;
		
		cout << fixed << setprecision(1) << soma/positivos;
			
		return 0;
	}