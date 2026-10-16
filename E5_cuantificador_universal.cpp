#include <iostream>

using namespace std;

bool P(int x){
    if ((x%2) == 0){
    return true;
    } else {
        return false;
    }
}

bool verificarUniversalidad(int inicio, int fin){
    
    bool todoscumplen = true;
    
    int nocumplen[100];
    int indice = 0;

    // Primera pasada: verificar con break para mas eficiencia.
    for (int x = inicio; x <= fin; x++) {
        if (!P(x)) {
            todoscumplen = false;
            break; // <- corte temprano, encontro un caso que no cumple.
        }
    }

    // Segunda pasada para enlistar los que no cumplen.
    if (!todoscumplen) {
        cout << "Estos no cumplen: ";
        for (int x = inicio; x <= fin; x++) {
            if (!P(x)){
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return todoscumplen;
}



int  main() {
    int inicio, fin;
    cout << "Ingrese los elementos del conjunto:" << endl;
    cin >> inicio;
    cin >> fin;
    bool resultado = verificarUniversalidad(inicio,fin);
    cout << "¿Todos los números del " << inicio << " al "<< fin <<" son pares? " << resultado <<endl;
    
    return 0;
}
