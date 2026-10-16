#include <iostream>

int main() {
    bool p, q;

    std::cout << "Ingrese valor de p (1 o 0): ";
    std::cin >> p;

    std::cout << "Ingrese el valor de q(1 o 0): ";
    std::cin >> q;
    
    // mostrar p && q, p || q, ~p, ~q, !p || q...
    if (p && q) {
       std::cout << "el valor de p ∧ q es Verdadero \n";
     } else {
        std::cout << "El valor de p ∧ q es Falso\n";
    }

    if (p||q) {
        std::cout << "El valor de p ∨ q es Verdadero\n";
    } else {
        std::cout << "El valor de p ∨ q es Falso\n";
    }
    
    std::cout << "El valor de !p es: " << !p << "\n" ;
    std::cout << "El valor de !q es: " << !q << "\n";
   
    if (!p || q) {
        std::cout << "El valor de p -> q es Verdadero\n";
    } else {
        std::cout << "El valor de p -> q es Falso\n";
    }

    /*
    Reflexion:
            Si, la tabla de verdad es exactamente igual a la de MPI.
    */ 
    return 0;

}
