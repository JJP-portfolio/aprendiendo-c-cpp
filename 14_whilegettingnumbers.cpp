#include <iostream>
using namespace std;

int main() {
    int num=1, sum = 0;
    cout << "Ingrese un numero a sumar: " << endl;
    while (num != 0){
        cin >> num;
        sum = num + sum;
    }
    cout << "Total: " << sum << endl;
    return 0;
}
