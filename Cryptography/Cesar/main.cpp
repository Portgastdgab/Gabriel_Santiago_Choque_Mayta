#include <iostream>

using namespace std;

class Cesar{
    string alfabeto = "abcdefghijklmnopqrstuvwxyz";
    string palabra;
    int clave =3 ;

    int modulo(int a, int n){
        int r = a-n*(a/n);
        r = r+(r<0)*n;
        return r;
    }
    int l_a_n(char letra){
        for (int i = 0; i < 26; ++i) {
            if (letra == alfabeto[i]){
                return i;
            }
        }
    }

    char n_a_l(int pos){
        return alfabeto[pos%26];
    }

public:
    string Cifrado(string mensaje){
        for (int i = 0; i < mensaje.size(); ++i) {
            palabra.push_back(n_a_l(l_a_n(mensaje[i])+clave));
        }
        return palabra;
    }
    string Descifrado(string mensaje){
        for (int i = 0; i < mensaje.size(); ++i) {
            palabra.push_back(n_a_l(l_a_n(mensaje[i])-clave));
        }
        return palabra;
    }
};

int main() {
    string mensaje = "hola";
    mensaje = Cesar().Cifrado(mensaje);
    cout<<"Cifrado: "<<mensaje<<endl;
    mensaje = Cesar().Descifrado(mensaje);
    cout<<"Descifrado: "<<mensaje;
}
