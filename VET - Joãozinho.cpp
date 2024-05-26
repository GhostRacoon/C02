#include <iostream>
using namespace std;

int main () {
	
	int n;
	int i;
	int r[11];
	
	cin >> n;
	
	for(i=0; i<=10;i++){
		r[i] = n * i;
	}
	
	for(i =0; i<=10;i++){
		cout << n << " x " << i << " = " << r[i] << endl;
	}
	
	return 0;
}