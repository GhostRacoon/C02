#include <iostream>
#include <iomanip>
using namespace std;

float media(int notas[], int nAlunos){
	
	float mediadaturma;
	float soma = 0;
	int i;
	
	for(i=0; i<nAlunos; i++){
		soma = soma + notas[i];
	}
	
	mediadaturma = soma/nAlunos;
	
	return mediadaturma;
}




int main()
{
	
	int n; //numero de alunos
	int notas[100];
	int i;
	float mediafinal;
	
	cin >> n;
	
	for(i=0; i<n; i++){
		cin >> notas[i];
	}
	
	mediafinal = media(notas, n);
	
	cout << fixed << setprecision(2);
	cout << "Media da turma = " << mediafinal << endl;
	
	return 0; 	
}