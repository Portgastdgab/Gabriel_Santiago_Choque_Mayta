#include <iostream>

using namespace std;

class Cesar {
private:

    string palabra;

    int modulo(int , int );

public:
    string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz1234567890-.";
    string Emisor(string , int );
    string Receptor(string , int );
};