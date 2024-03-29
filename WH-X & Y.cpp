#include <iostream>
using namespace std;

	int main ()
	{
		int x = 0, y = 0;
		
		do 
		{
			cin >> x >> y;
			if (x < y)
			{
				cout << "Crescente" << endl;
			}
			
			else if (y < x)
			{
				cout << "Decrescente" << endl;
			}
			
		} while (x != y);
		
		return 0;
	}