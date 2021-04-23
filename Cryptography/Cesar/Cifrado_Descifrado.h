#include <iostream>

using namespace std;

class Cesar {
private:

    string palabra;

    int modulo(int a, int n);

public:
    string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz1234567890-.";
    string Emisor(string mensaje, int clave);
    string Receptor(string mensaje, int clave);
};