#include <iostream>
#include <cmath>
using namespace std;

	int main ()	{
		
		int pj1, ex1, p1, np1;
		int pj2, ex2, p2, np2;
		float media;
		
		cin >> p1 >> pj1 >> ex1;
		np1 = 0.8 * p1 + 0.2 * pow(ex1*pj1,0.5);
		cout << "Nota da np1: " << np1 << endl;
		
		cin >> p2 >> ex2 >> pj2;
		np2 = 0.8 * p2 + 0.2 * pow(ex2*pj2,0.5);
		cout << "Nota da np2: " << np2 << endl;
		
		media = (np1+np2)/2;
		cout << "Media aritmetica: " << media << endl;
		
		if (media <= 30)
		{
			cout << "Voce foi reprovado! " << endl;
		} 
		else if (media <= 59)
		{
			cout << "Voce vai para a np3! " << endl;
		}
		else 
		{
			cout << "Voce foi aprovado! ";
		}
		
		return 0;
	}