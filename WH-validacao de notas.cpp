#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nota1, nota2;
    int notas_validas = 0;
    
    // Validando a primeira nota
    while (notas_validas < 1) {
        cin >> nota1;
        if (nota1 < 0 || nota1 > 10) {
            cout << "nota invalida" << endl;
        } else {
            notas_validas++;
        }
    }
    
    // Validando a segunda nota
    while (notas_validas < 2) {
        cin >> nota2;
        if (nota2 < 0 || nota2 > 10) {
            cout << "nota invalida" << endl;
        } else {
            notas_validas++;
        }
    }
    
    double media = (nota1 + nota2) / 2.0;
    cout << fixed << setprecision(2);
    cout << "media = " << media << endl;

    return 0;
}