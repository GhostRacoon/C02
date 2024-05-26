#include <iostream>
using namespace std;

int main ()
{
	
	int i;
	int n;
	int votos[1000];
	int like = 0;
	int dislike = 0;
	
	cin >> n;
	
	for(i=0; i<n; i++)
	{
		cin >> votos[i];
	}
	
	for (i=0; i<n; i++)
	{
			
		if(votos[i] == 1)
		{
			like++;
		}
		
		else if(votos[i] == -1)
		{
			dislike++;
		}
	}
	
	if (like > dislike)
	{
		cout << "A maioria gostou" << endl;
	}
	
	else if (dislike > like)
	{
		cout << "A maioria nao gostou" << endl;
	}
	
	else if (like == dislike)
	{
		cout << "Deu empate" << endl;
	}
	
	
	return 0;
}