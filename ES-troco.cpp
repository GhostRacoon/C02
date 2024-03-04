#include <iostream>
#include <iomanip>
using namespace std;

	int main(){
		
		int money, price;
		float troco;
		
		cin >> money >> price;
		troco = price - money;
		
		cout << fixed << setprecision(3);
		cout << "TROCO = " << troco << endl;
		
		return 0;
	}