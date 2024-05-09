#include <iostream>
using namespace std;

int main (){
	
	int amigos[9999];
	int i;
	int n;
	int menor = 9999;
	int maior = 0;
	
	
	cin >> n; //numero de usuarios
	
	for (i=0;i<n;i++) // numero de amigos de cada usuario
	{
		cin >> amigos[i];
	}
	
	for(i=0; i < n; i++) // qual é o maior e o menor numero de amigos
	{
		if (amigos[i] < menor)
		{
			menor = amigos[i];	
		}
		
		if(amigos[i] > maior)
		{
			maior = amigos[i];
		}
	}
	
	cout << "Menor numero de contatos: " << menor << endl;
	cout << "Maior numero de contatos: " << maior << endl;
	
	
	return 0;
}