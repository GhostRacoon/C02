#include <iostream>
using namespace std;

int main () 
{
	
	int i;
	int n;
	int visualizacoes[1000];
	int mais = 0;
	int menos = 0;
	
	cin >> n; // numero de videos
	
	for (i = 0; i<n; i++)
	{
		cin >> visualizacoes[i];
	}
	
	for (i = 0; i <n;i++)
	{
		if(visualizacoes[i] < 10000000)
		{
			menos++;
		}
		
		if(visualizacoes[i] > 10000000)
		{
			mais++;
		}
	}
	
	cout << mais << " video(s) com mais de 10M views" << endl;
	cout << menos << " video(s) com menos de 10M views" << endl;
	
	return 0;
}