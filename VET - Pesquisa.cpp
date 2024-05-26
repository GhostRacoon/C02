#include <iostream>
using namespace std;

int main()
{
	int n[100]; 
	int i = 0;
	int elemento;
	int aux = 0;
	int valor;
	
	
	while (i <= 100)
	{
		cin >> valor;
	        
    	if (valor == 0)
			{
	            break;
	        }
	        
		n[i] = valor;
		i++;
	}
	   
	//elemento a ser pesquisado
	cin >> elemento;
	for(i=0; i<100;i++)
	{
		if(n[i] == elemento)
		{
			cout << "Elemento " << elemento << " encontrado na posicao " << n[i] << endl;
			aux++;
		}
	}
	
	if (aux == 0)
		{
			cout << "Elemento " << elemento << " nao foi encontrado" << endl;
		}
	
	
	return 0;
}