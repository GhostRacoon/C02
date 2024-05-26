#include <iostream>
#include <cmath>
using namespace std;

float calc_delta(float a, float b, float c){
	
	float delta;
	
	delta = pow(b,2) - 4 * a * c;
	
	return delta;
}


int main()
{
	
	float a;
	float b;
	float c;
	float valordelta;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	valordelta = calc_delta(a, b, c);
	
	cout << "delta = " << valordelta << endl;
	
	
	return 0;
}