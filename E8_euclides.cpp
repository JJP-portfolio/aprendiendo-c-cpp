#include <iostream>

using namespace std;


int calcularMCD(int a, int b) {
    if (a > 0 && b > 0) {
         while (b != 0) {
            int resto = a % b;
            a = b;
            b = resto;
        }
    }
    return a;
}

int main() {
    int a = 0, b = 0;
    cout << "Ingrese dos enteros positivos: " << endl;
    cin >> a;
    cin >> b;    
    int mcd = calcularMCD(a,b);
    cout << "El MCD es: " << mcd << endl;
    if (mcd == 1) {
        cout << a << " y " << b << " SI son coprimos." << endl;
    } else {
        cout << a << " y " << b << " NO son coprimos.";
    }
}


