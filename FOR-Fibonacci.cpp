#include <iostream>
using namespace std;

	int main ()
	{
		int i;
		int n;
		int a = 0, b = 1;
		int next_term;
		
		cin >> n;
		
		cout << a << " " << b << " ";
		
			
			for (i =2; i < n; i++)
			{
				next_term = a + b;
				cout << next_term << " ";
				a = b;
				b = next_term; 
			}
		
		return 0;
	}