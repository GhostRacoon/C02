#include <iostream>
using namespace std;

	int main()
	{
		
		int gremio = 0, golgre = 0, vitoriasg = 0;
		int inter = 0, golint = 0, vitoriasi = 0;
		int aux, grenais = 0;
		int empate = 0;
		 
		do {
			grenais++;
			
			cin >> golint;
			cin >> golgre;
			
			if (golgre > golint)
			{
				vitoriasg++;
			}
			
			else if (golint > golgre)
			{
				vitoriasi++;
			}
			 else if (golint = golgre)
			 {
			 	empate++;
			 }
			
			cout << "Novo grenal (1-sim 2-nao)" << endl;
			cin >> aux;
			
		} while (aux == 1);
		
		
		cout << grenais << " grenais" << endl;
		cout << "Inter:" << vitoriasi << endl;
		cout << "Gremio:" << vitoriasg << endl;
		cout << "Empates:" << empate << endl;
		
		if (vitoriasi > vitoriasg)
		{
			cout << "Inter venceu mais" << endl;
		}
	
		else if (vitoriasg > vitoriasi)
		{
			cout << "Gremio venceu mais" << endl;
		}
		
		else 
		{
			cout << "Nao houve vencedor" << endl;
		}		
		
		return 0;
	}