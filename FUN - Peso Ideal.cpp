#include <iostream>
#include <iomanip>
using namespace std;

float ideal(float h, char sexo){
	
	float pesoideal;
	
	if (sexo == 'F'){
		pesoideal = 62.1 * h - 44.7;
	}
	
	else if (sexo =='M'){
		pesoideal = 72.7 * h - 58;
	}
	
	return pesoideal;
	
}



int main()
{
	
	float peso;
	char sexo;
	float high;
	
	cin >> high;
	cin >> sexo;
	
	peso = ideal(high, sexo);
	cout << fixed << setprecision(2);
	cout << "Peso ideal = " << peso << " kg" << endl;
	
	return 0;
}