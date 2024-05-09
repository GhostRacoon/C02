#include <iostream>
#include <iomanip>
using namespace std;

int main () 
{
	
	int i;
	int n;
	float notas[80];
	float somadamedia = 0;
	float media;
	int acima = 0;
	int abaixo = 0;
	
	cin >> n; // numero de alunos

	for(i = 0; i < n; i++) // coloca as notas de cada aluno
	{
		cin >> notas[i];
	}
	
	for(i = 0; i < n; i++) // define a media da turma
	{
		somadamedia = somadamedia + notas[i];
	}
	
	media = somadamedia/n;
	
	for (i = 0; i<n;i++) // define quem foi abaixo e quem foi acima da media
	{
		if (notas[i] >= media)
		{
			acima++;
		}
		
		if (notas[i] < media)
		{
			abaixo++;
		}
	}
	
	//mostra os dados da turma
	
	cout << fixed << setprecision(2) << endl;
	cout << "Media da turma: " << media << endl;
	cout << "Alunos com nota acima da media: " << acima << endl;
	cout << "Alunos com nota abaixo da media " << abaixo << endl;
	
	
	return 0;
}