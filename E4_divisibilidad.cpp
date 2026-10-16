#include <iostream>

using namespace std;


void dividir(int a,int b){
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Cociente: " << a/b << endl;
    cout << "Resto: " << a%b << endl;
    
    if(a%b == 0){
        cout << a << " divide a " << b << "? Si." << endl;
    } else {
        cout << a << " divide a " << b << "? No." << endl;
    }
}

void calcularMcd(int a, int b){
    //recibimos del main y hacemos copias para no sobreescribir los valores que ingresa el usuario
    int temp_a = a;
    int temp_b = b;

    while(temp_b != 0){
        int r = temp_a % temp_b;
        temp_a = temp_b;
        temp_b = r;
    }
    cout << "Algoritmo de Euclides: "<< endl;
    cout << "mcd(" << a << ", " << b << ") = " << temp_a << endl;
    if (temp_a == 1){
        cout << a << " y " << b << " son coprimos? Si.";
    } else {
        cout << a << " y " << b << " son coprimos? No.";
    }
}

int main() {
    int a, b;

    cout << "Ingrese a:" << endl;
    cin >> a;
    cout << "Ingrese b:" << endl;
    cin >> b;

    dividir(a,b);
    calcularMcd(a,b);
    
    return 0;
}
