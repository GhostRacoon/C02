#include <iostream>
#include <iomanip>
using namespace std;

	int main()
	{
		
		int code, quant;
		float price;
		
		cin >> code >> quant;
		
		switch (code)
		{
			case 1: 
				price = 4.00 * quant;
				cout << "Total: R$ " << fixed << setprecision(2) << price << endl;
				break;
		
		
			case 2:
				price = 4.50 * quant;
				cout << "Total: R$ " << fixed << setprecision(2) << price << endl;
				break;
		
		
			case 3:
				price = 5.00 * quant;
				cout << "Total: R$ " << fixed << setprecision(2) << price << endl;
				break;
		
		
		
			case 4:
				price = 2.00 * quant;
				cout << "Total: R$ " << fixed << setprecision(2) << price << endl;
				break;
		
		
			case 5:
				price = 1.50 * quant;
				cout << "Total: R$ " << fixed << setprecision(2) << price << endl;
				break;
		
			}
		
		
		
		return 0;
	}