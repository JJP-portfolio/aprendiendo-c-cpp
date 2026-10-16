#include <iostream>
#include <iomanip>

using namespace std;

void deMorgan1(){
    cout << "Ley de  De Morgan 1: ¬(p ∧ q) ↔ ¬p ∨ ¬q" << endl;
    cout << "p q |  ¬(p∧q)  |  ¬p∨¬q  |  Igual?" << endl;
    
    bool comparacion = 0;
    
    for (int p = 0; p <= 1 ; p++) {
        for (int q = 0; q <= 1; q++) {
            int demorgan1 = !(p&&q);
            int demorgan2 = !p||!q;
            comparacion = demorgan1 == demorgan2;
            string sino;
            
            if (comparacion == true) {
                sino = "Si";
            } else {
                sino = "No";
            }
            
            cout << p << " " << q << " |     " << demorgan1 << "    |   " << demorgan2 << "    |    " << sino << endl;  
            
        }
        
    }
    
}

void deMorgan2(){
    
    cout << "Ley de  De Morgan 2: ¬(p ∨ q) ↔ ¬p ∧ ¬q" << endl;
    cout << "p q |  ¬(p∨q)  |  ¬p∧¬q  |  Igual?" << endl;
    
    bool comparacion = 0;
    
    for (int p = 0; p <= 1 ; p++) {
        for (int q = 0; q <= 1; q++) {
            int demorgan1 = !(p||q);
            int demorgan2 = !p&&!q;
            comparacion = demorgan1 == demorgan2;
            string sino;
            
            if (comparacion == true) {
                sino = "Si";
            } else {
                sino = "No";
            }
            
            cout << p << " " << q << " |     " << demorgan1 << "    |   " << demorgan2 << "    |    " << sino << endl;  
            
        }
        
    }
    
    
}


int main(){
    deMorgan1();
    deMorgan2();
    return 0;
}
