	#include <iostream>
	#include <cmath>
	#include <iomanip>
	
	using namespace std;
	
	int main()
	{
		int x;
		float area;
		
		
		cin >> x;
		area = 3.14159 * pow(x,2); 
		
		cout << fixed << setprecision(3) << "AREA = " << area << endl;
		
	}