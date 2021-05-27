#include <iostream>
#include "RSA.h"
//#include "../../Funciones/Funciones.h"

using namespace std;

int main() {
    RSA yo(7);
    RSA persona(yo.e, yo.N);
    yo.message = "modo diablo";
    persona.chiper(yo.message);
    persona.show_encryption();
    yo.show_decryption();

}