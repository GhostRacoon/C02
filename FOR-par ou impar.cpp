#include <iostream>
using namespace std;

	int main ()
	{
		
		int n;
		int i;
		int value, rest;
		
		cin >> n;
		
			for (i = 0; i < n; i++)
			{
				cin >> value;
				
				rest = value % 2;
			
				if (rest == 0 && value < 0)
				{
					cout << "EVEN NEGATIVE" << endl;
				}
				
				else if (rest != 0 && value < 0)
				{
					cout << "ODD NEGATIVE" << endl;
				}
				
				else if (rest == 0 && value > 0)
				{
					cout << "EVEN POSITIVE" << endl;
				}
				
				else if (rest != 0 && value > 0)
				{
					cout << "ODD POSITIVE" << endl;
				}
				
				else if (value == 0)
				{
					cout  << "NULL" << endl;
				}
					
			}
		
		return 0;
	}