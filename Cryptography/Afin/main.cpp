#include "Cifrado_Descifrado.h"

int main() {
    int clave_A = rand();
    int clave_B = rand();
    string mensaje = "freedom";
    mensaje = Afin().Emisor(mensaje, clave_A, clave_B);
    cout << "Cifrado: " << mensaje << endl;
    mensaje = Afin().Receptor(mensaje, clave_A, clave_B);
    cout<<"\n\nDescifrado: "<<mensaje;
}