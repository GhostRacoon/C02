#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char continuar;
    
    do {
        double nota1, nota2;
        int notas_validas = 0;
        
        while (notas_validas < 1) {
            cin >> nota1;
            
            if (nota1 < 0 || nota1 > 10) 
            {
                cout << "nota invalida" << endl;
            }
            
            else 
            {
                notas_validas++;
            }
        }
        
        while (notas_validas < 2) {
            cin >> nota2;
            if (nota2 < 0 || nota2 > 10) 
            {
                cout << "nota invalida" << endl;
            } 
            
            else
            {
                notas_validas++;
            }
        }
        
        double media = (nota1 + nota2) / 2.0;
        cout << fixed << setprecision(2);
        cout << "media = " << media << endl;
        
        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> continuar;
        } while (continuar != '1' && continuar != '2');
        
    } while (continuar == '1');

    return 0;
}