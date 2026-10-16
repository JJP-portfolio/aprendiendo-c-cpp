#include <iostream>

using namespace std;

int conjunto[5] = {2, 4, 6, 8, 10};

bool P(int x) {
    if ((x%2) == 0) {
        return true;
    } else {
        return false;
    }
}

bool verificarUniversal() {

    bool todosCumplen = true;
    for (int i = 0; i < 5; i++) {
        if (!P(conjunto[i])) {
            todosCumplen = false;
            break;
        } else {
            todosCumplen = true;
        }
    }
    return todosCumplen;
}

bool verificarExistencial() {
    
    bool existe = false;
    int i = 0;
    while ((i< 5) && !existe) {
        if (P(conjunto[i])) {
            existe = true;
        }
        i++;
    }
    return existe;
}

bool negacionUniversal() {
    bool todosCumplenarm1
}

bool negacionExistencial() {

}

int main () {
    bool p = verificarUniversal(), q = verificarExistencial();
    cout << "Equivalencia 1: ¬(∀x: P(x)) ↔ ∃x ¬P(x)" << endl;
    cout << "Conjunto: {";
    for (int j = 0; j < 4; j++) {
        cout << conjunto[j] << " ,";
        }
    }
    cout << "}" << endl;
    return 0;
}
