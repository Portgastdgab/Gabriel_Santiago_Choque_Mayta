#include <iostream>

using namespace std;

class Escitala {
private:
    int clave[2] = {5, 4};
    string palabra;  //almacen del mensaje cifrado o decifrado
public:
    string Cifrado(string &mensaje) {
        for (int i = 0; i <= clave[0] * clave[1] - mensaje.size() + 1; ++i) {  //bucle donde se añaden los espacios
            mensaje = mensaje + " ";
        }
        for (int i = 0; i < clave[1]; ++i) {  //se añaden a la palabra las letras del mensaje
            for (int j = 0; j < clave[0]; ++j) {
                palabra.push_back(mensaje[i + (j * clave[1])]);
            }

        }
        return palabra;
    }

    string Decifrado(string mensaje) {

        for (int i = 0; i < clave[0]; ++i) {  //Se añaden a la palabra el mensaje cifrado de manera inversa al cifrado
            for (int j = 0; j < clave[1]; ++j) {
                palabra.push_back(mensaje[i + (j * clave[0])]);
            }
        }
        return palabra;
    }

};

int main() {
    string mensaje = "Gabriel Santiago";
    mensaje = Escitala().Cifrado(mensaje);
    cout << "Mensaje cifrado: " << mensaje << endl;
    mensaje = Escitala().Decifrado(mensaje);
    cout << "Mensaje decifrado: " << mensaje << endl;
}