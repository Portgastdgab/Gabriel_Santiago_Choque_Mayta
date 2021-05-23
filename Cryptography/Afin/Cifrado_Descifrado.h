#include <iostream>

using namespace std;

class Afin {
private:

    string palabra;

    int module(int , int );

    int recursive_Euclid(int , int );


public:
    int Euclid_extended(int, int);
    string alfabeto = "abcdefghijklmnopqrstuvwxyz,.-_ABCDEFGHIJKLMNOPQRSTUVWXYZ 0123456789()";
    string Emisor(string, int, int);
    string Receptor(string, int, int);
};