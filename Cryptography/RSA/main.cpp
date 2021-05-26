#include <iostream>
#include "../../Funciones/Funciones.h"

using namespace std;

int main() {
    vector <int> criba = criba_eratostenes(40);
    vector <int> bits = prime_bits(5);
    for (int i = 0; i < criba.size(); ++i) {
        cout<<criba[i]<<"    ";
    }
    cout<<endl<<endl;
    for (int i = 0; i < bits.size(); ++i) {
        cout<<bits[i]<<"    ";
    }
}
