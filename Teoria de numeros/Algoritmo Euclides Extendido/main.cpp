#include <iostream>
using namespace std;

int module(int a, int n) {
    int r = a - n * (a / n);
    r = r + (r < 0) * n;
    return r;
}

void Euclid_extended(int a, int b) {
    int g[6];
    g[0] = a;
    g[1] = b;
    while (module(a, b) != 0) {
        int temp = b;
        b = module(a, b);
        a = temp;
    }
    if (b == 1) {
        cout << "Es posible hallar la inversa" << endl;
        int y[6], u[6], v[6];
        u[0] = 1;
        u[1] = 0;
        v[0] = 0;
        v[1] = 1;
        for (int i = 0; i<5 ; ++i) {
            y[i+1] = g[i-1]/g[i];
            //g[i+1] = g[i-1] - (y[i+1]*g[i]);
            u[i+1] = u[i-1] - (y[i+1]*u[i]);
            v[i+1] = v[i-1] - (y[i+1]*v[i]);
            cout<<"i = "<<i<<"   y["<<i<<"] = "<<y[i]<<"   g["<<i<<"] = "<<g[i]<<"   u["<<i<<"] = "<<u[i]<<"   v["<<i<<"] = "<<v[i]<<endl;
            cout<<"hola"<<endl;
        }

    } else {
        cout << "No es posible hallar la inversa" << endl;
    }

}

int main() {
    Euclid_extended(275, 9);
}
