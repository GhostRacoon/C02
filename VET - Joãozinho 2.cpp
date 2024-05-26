#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	
	float x[100];
	float y[100];
	char op[100];
	float z[100];
	int i;
	
	int n; //númemro de casos
	
	cin >> n;
	
	for (i =0; i<n; i++){
		cin >> x[i];
	}
	
	for (i=0; i<n; i++){
		cin >> y[i];
	}
	
	for (i=0; i<n; i++){
		cin >> op[i];
	}
	
	
	//resultados das operações sendo guardados no vetor z
	
	for (i=0; i<n; i++) 
	{
        switch (op[i]) 
		{
            case '+':
                z[i] = x[i] + y[i];
                break;
            
            case '-':
                z[i] = x[i] - y[i];
                break;
            
            case '*':
                z[i] = x[i] * y[i];
                break;
            
            case '/':
            	if (op[i] != 0){
            		z[i] = x[i] / y[i];
				}
				
				else {
					cout << "Divisão por zero" << endl;
				}
            		break;
		}
		
		
	}
	
	for (i=0; i<n; i++){
		
		if (op[i] == '/'){
			cout << x[i] << " " << op[i] << " " << y[i] << " = ";
			cout << fixed << setprecision(2);
			cout << z[i] << endl;
		}
		
		else {
		cout << fixed << setprecision(0);
		cout << x[i] << " " << op[i] << " " << y[i] << " = " << z[i]<< endl;
		} 
	}
            	

	return 0;
}