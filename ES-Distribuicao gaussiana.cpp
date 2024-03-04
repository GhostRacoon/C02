//Gaussiana braba demais da conta 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

	float e = 2.71828;
	float pi = 3.14159;
	
	int main(){
		
		float x, m, s;
		float y, ybase, yexp;
		
		cin >> x >> m >> s;
		
		/*calculei e expressao de forma decomposta*/
		//base da expressao
	
		ybase = 1/ sqrt(2*pi*pow(s,2));
		
		
		//expoente da expresssao
		
		
		yexp = pow(e, - pow(x - m,2) / (2 * pow(s,2)));
		
		//juncao da expressao decomposta
		
		y = ybase * yexp;
		
		//saida 
		cout << fixed << setprecision(4);
		cout << y << endl;
		
		
			return 0;
	}