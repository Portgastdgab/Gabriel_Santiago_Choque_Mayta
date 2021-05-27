#include <iostream>
#include "../../Funciones/Funciones.h"

using namespace std;

class RSA {
private:
    int d;
    int p;
    int q;
    string alfabeto = "abcdefghijklmnopqrstuvwxyz ";

public:
    int e;
    int N;
    string message;
    vector <int> encrypted_letter;
    RSA(int);
    RSA(int, int);

//    virtual ~RSA(void);
//    int resto_chino(int);

    void chiper(string);
    string dechiper(vector <int>);
    void show_encryption();
    void show_decryption();
};

