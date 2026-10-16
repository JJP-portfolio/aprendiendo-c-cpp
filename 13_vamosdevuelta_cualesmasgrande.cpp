#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros: " << endl;
    cin >> a >> b;
    int sum = a + b;
    cout << "Suma: " << sum << endl ;
    float promedio = (a + b) / 2.0; // 2.0 fuerza la division decimal.
    cout << "Promedio: " << promedio << endl;
    if (a < b) {
        cout << "El mas grande es: " << b << endl;
    } else if (a > b){
        cout << "El mas grande es: " << a << endl;
    } else {
        cout << "Son iguales" << endl;
    }
    return 0;
}
