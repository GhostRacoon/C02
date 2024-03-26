#include <iostream>
using namespace std;

int main() {
    // Inicializa a variável para contar os valores positivos
    int positivos = 0;
    float valor;
	int i;
	
    // Loop para ler os 6 valores
    for (i = 0; i < 6; ++i) {
        cout << "Digite um valor: ";
        cin >> valor;
        
        // Verifica se o valor é positivo e diferente de zero
        if (valor > 0) {
            positivos++;
        }
    }
    
    cout << positivos << " valores positivos" << endl;

    return 0;
}