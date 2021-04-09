#include <iostream>

using namespace std;

class Rail_fence {
    int clave = 5;
    int patron[2];
    int suma, cont = 0;
    string palabra;
public:
    string Chiper(string mensaje) {
        patron[0] = (clave - 1) * 2;
        patron[1] = 0;
        for (int i = 0; i < clave; ++i) {
            suma = i;
            palabra.push_back(mensaje[i]);
            while (true) {
                if (cont % 2 == 0 or patron[1] == 0) {
                    suma = suma + patron[0];
                }
                if (cont % 2 != 0 or patron[0] == 0) {
                    suma = suma + patron[1];
                }
                if (suma > mensaje.size() - 1) {
                    break;
                }
                cont++;
                palabra.push_back(mensaje[suma]);

            }
            patron[0] = patron[0] - 2;
            patron[1] = patron[1] + 2;
            cont = 0;
        }
        return palabra;
    }

    string Deschiper(string mensaje) {
        char despalabra[mensaje.size()];
        int iter = 0;
        patron[0] = (clave - 1) * 2;
        patron[1] = 0;
        for (int i = 0; i < clave; ++i) {
            suma = i;
            while (true) {
                despalabra[suma] = mensaje[iter];
                if (cont % 2 == 0 or patron[1] == 0) {
                    suma = suma + patron[0];
                }
                if (cont % 2 != 0 or patron[0] == 0) {
                    suma = suma + patron[1];
                }
                if (suma > mensaje.size() - 1) {
                    break;
                }
                cont++;
                iter++;
            }
            patron[0] = patron[0] - 2;
            patron[1] = patron[1] + 2;
            cont = 0;
            iter++;
        }
        for (int i = 0; i < mensaje.size(); ++i) {
            palabra.push_back(despalabra[i]);
        }
        return palabra;
    }
};

int main() {
    string mensaje = "Gabriel Santiago";
    string cifrado = Rail_fence().Chiper(mensaje);
    cout << "Mensaje Cifrado: " << cifrado << endl;
    string decifrado = Rail_fence().Deschiper(cifrado);
    cout << "Mensaje Decifrado: " << decifrado;
}
