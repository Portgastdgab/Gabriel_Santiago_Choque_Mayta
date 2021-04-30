#include "Cifrado_Descifrado.h"

int Afin::module(int a, int n) {
    int r = a - n * (a / n);
    r = r + (r < 0) * n;
    return r;
}

int Afin::recursive_Euclid(int a, int b){
    if (module(a, b) == 0){
        return b;
    }
    else   {
        int temp = b;
        b = module(a, b);
        a = temp;
        recursive_Euclid(a,b);
    }

}


int Afin::Euclid_extended(int a, int b) {
    int cont = 0;
    int temp1 = a;
    int temp2 = b;
    while (module(a, b) != 0) {
        int temp = b;
        b = module(a, b);
        a = temp;
        cont++;
    }
    cont = cont + 2;
    int g[cont];
    g[0] = temp1;
    g[1] = temp2;

    int y[cont], u[cont], v[cont];
    u[0] = 1, u[1] = 0, v[0] = 0, v[1] = 1;
    for (int i = 1;; ++i) {
        y[i + 1] = g[i - 1] / g[i];
        g[i + 1] = g[i - 1] - (y[i + 1] * g[i]);
        u[i + 1] = u[i - 1] - (y[i + 1] * u[i]);
        v[i + 1] = v[i - 1] - (y[i + 1] * v[i]);
        if (g[i + 1] == 0) {
            //cout<<"Valor de x: "<<u[i]<<endl;
            //cout<<"Valor de y: "<<v[i]<<endl;
            return module(u[i], g[1]);
        }
    }
}

string Afin::Emisor(string mensaje, int clave_A, int clave_B) {
    while (recursive_Euclid(clave_A, alfabeto.size()) != 1){
        clave_A = rand();
    }
    cout<<"Clave A = "<<clave_A<<endl;
    cout<<"Clave_B = "<<clave_B<<endl<<endl;
    for (int i = 0; i < mensaje.size(); ++i) {
        palabra.push_back(alfabeto[module( (clave_A*(alfabeto.find(mensaje[i])))+clave_B,alfabeto.size())]);
    }
    return palabra;
}

string Afin::Receptor(string mensaje, int clave_A, int clave_B) {
    clave_A = Euclid_extended(clave_A, alfabeto.size());
    for (int i = 0; i < mensaje.size(); ++i) {
        palabra.push_back(alfabeto[module(clave_A*(alfabeto.find(mensaje[i])-clave_B), alfabeto.size())]);
    }
    return palabra;
}