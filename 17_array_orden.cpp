#include <iostream>

using namespace std;

int main() {
    int nums[5];
    cout << "Ingrese 5 numeros: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }

    cout << "Orden original: ";
    for (int j = 0; j < 5; j++) {
        cout << nums[j] << " ";
    }
    cout << endl;

    cout << "Orden inverso: ";
    for (int k = 4; k >= 0; k--) {
        cout << nums[k] << " ";
    }
    cout << endl;
}
