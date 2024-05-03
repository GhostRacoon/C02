#include <iostream>
using namespace std;


	int soma(int x, int y)
	{
	
	int plus;
	plus = x + y;
	
	return plus;
	
	}
	
	int subtracao (int x, int y)
	{
		int minus;
		minus = x - y;
		
		return minus;
	}
	
	int divisao(int x, int y)
	{
		int div;
		div = x/y;
		
		return div;
	}
	
	int multiplicacao (int x, int y)
	{
		int times;
		times = x * y;
		
		return times;
	}
	
	int main ()
	{
		int x;
		int y;
		int op;
		int res;
		
	cout << "qual operacao? (1 - soma; 2 - subtracao; 3 - divisao; 4 - multiplicao)" << endl;
	
	cin >> op;
	
	cout << "digite os numeros" << endl;
	cin >> x;
	cin >> y;
	
	switch (op) 
	{
		case 1:
			res = soma(x,y);
			break;
		
		case 2: 
			res = subtracao(x,y);
			break;
		
		case 3: 
			res = divisao(x,y);
			break;
		
		case 4: 
			res = multiplicacao(x,y);
			break;
				
	}
	 	
	 	cout << "Resultado: " << res << endl;
	 	
	 	return 0;	
	}
	