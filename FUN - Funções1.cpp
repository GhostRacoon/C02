#include <iostream>
#include <cmath>
using namespace std;

int calc_a(int x){
	
	int a;
	 a = 2 * pow(x,2) + 3 * x - 1;
	 return a; 
}

int calc_b(int x){
	
	int b;
	 
	b = pow(x,3);
	return b;
}

int calc_c(int y){
	
	int c;
	
	c = pow(y,3);
	return c;
}

int main()
{
	
	int x;
	int y;
	
	cin >> x;
	cin >> y;
	
	cout << "a = " << calc_a(x) << endl;
	cout << "b = " << calc_b(x) << endl;
	cout << "c = " << calc_c(y) << endl;

	return 0;
}