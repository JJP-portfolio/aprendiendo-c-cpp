#include <iostream>

using namespace std;

void saludo(){
    cout << "Bienvenido al programa" << endl;
}

int suma(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int a = 0, b = 0;
    saludo();
    cout << "Ingrese dos numeros: " << endl;
    cin >> a >> b;
    int resultado = suma(a, b);
    cout << "El resultado es: " << resultado << endl;
}
