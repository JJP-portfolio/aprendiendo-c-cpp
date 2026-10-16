#include <iostream>

using namespace std;

bool P(int x){
    if((x%2) == 0) {
        return true;
    } else {
        return false;
    }
}

int conjunto[5] = {1, 3, 5, 7, 8};


bool comprobarExistencial(){
    
    bool existe = false;
    
    int i = 0;
    int num_exist = 0;
    
    while ((i < 5) && !existe) {
        if (P(conjunto[i])) {
            existe = true;
            num_exist = conjunto[i];
            cout << "Si, el numero " << num_exist << " cumple la propiedad." << endl;
        } 
        i++;
    }
    if (!existe) {
        cout << "No, ninguno cumple la propiedad.";
    }
    
    return existe;
}

int main() {
    //Salida del conjunto.
    cout << "Existe un numero par en: {";
    for (int j = 0; j < 5; j++) {
        cout << conjunto[j];
        if (j < 4){
            cout << ", ";
        }
    }
    cout << " }?" <<endl;
    
    comprobarExistencial();
}
