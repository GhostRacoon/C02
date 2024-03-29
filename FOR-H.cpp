#include <iomanip>
#include <iostream>
using namespace std;

	int main ()
	{
		int n, i;
		double h = 0;
		 
		cin >> n;
		
		for (i = 1; i <= n; i++)
		{
			h += 1.0 / i;
		}
		
		cout << fixed << setprecision(4) << h << endl;
		
		return 0;
	}