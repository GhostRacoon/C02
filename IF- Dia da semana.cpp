#include <iostream>
#include <cmath>
using namespace std;

	int main(){
		
	int d, m, a;
	float n, g, delta, f;
	float fracpart, intpart;
	int ds;

	cin >> d >> m >> a;


	if (m <= 2)
	{
		f = m+13;	
	}
	else if (m > 2)
	{
	 	f = m +1;
	}
	
	
	if (m <= 2)
	{
		g = a - 1;
	}
	else if (m > 2)
	{
		g = a;
	}
	

	n = int(365.25 * g) + int(30.6 * f) - 621049 + d;

	
	if (n < 36523)
	{
		delta = 2;
	}
	else if (n >= 73048)
	{
		delta = 0;
	}
	else if ( n < 73048)
	{
		delta = 1;
	}
	
	fracpart = modf(n/7, &intpart);
	ds = round(fracpart * 7) + delta + 1;

	switch (ds)
		{
			case 1:
			cout << "Domingo" << endl;
	   		break; 
		
		
			case 2: 
			cout << "Segunda-feira" << endl;
			break;
		
		
			case 3: 
			cout << "Terca-feira" << endl;	
			break;
		
		
			case 4: 
			cout << "Quarta-feira" << endl;
			break;
		
		
			case 5:
			cout << "Quinta-feira" << endl;
			break;
		
		
			case 6: 
			cout << "Sexta-feira" << endl;
			break;
		
		
			case 7: 
			cout << "Sabado" << endl;
			break;
		}
		
		return 0;
	}