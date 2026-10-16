#include <iostream>

using namespace std;

int main() {
    bool esPrimo = true;
    int num = 0;
    cout << "Ingrese un numero: " << endl;
    cin >> num;
    for(int i = 2; i < num-1; i++){
        if(num % i == 0){
            esPrimo = false;
            break;
        }
    }
    if (esPrimo == false) {
        cout << num << " no es primo" << endl;
    } else {
        cout << num << " es primo" << endl;
    }
}
