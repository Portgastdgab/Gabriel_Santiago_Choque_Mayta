#include "Cifrado_Descifrado.h"

int main() {
    int clave_A = 34;
    int clave_B = 46;
    string mensaje = "tJsfJsfQPMseQdQsQKQd(s2QkMOsfQPMJseQdQsKM(s QfsHJgJsjGMsGfsgJPJsHJñQkJdsfJKQH(stJsfJsfQPMseQdQsQKQd(s2QkMOsfQPMJseQdQsKM(szMHsHGOñJHsfGfPQsHOsbJgbMOdJfsdOQgMkQk";
    //mensaje = Afin().Emisor(mensaje, clave_A, clave_B);
    //cout << "Cifrado: " << mensaje << endl;
    mensaje = Afin().Receptor(mensaje, clave_A, clave_B);
    cout<<"\n\nDescifrado: "<<mensaje;
}