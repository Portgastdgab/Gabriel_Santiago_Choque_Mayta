#include <iostream>

using namespace std;

int module(int a, int n) {
    int r = a - n * (a / n);
    r = r + (r < 0) * n;
    return r;
}

int Euclid_extended(int a, int b) {
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
        //cout << "i = " << i << "   y[" << i << "] = " << y[i] << "   g[" << i << "] = " << g[i] << "   u[" << i
             //<< "] = " << u[i] << "   v[" << i << "] = " << v[i] << endl;
        if (g[i + 1] == 0) {
            //cout<<"Valor de x: "<<u[i]<<endl;
            //cout<<"Valor de y: "<<v[i]<<endl;
            return module(u[i], g[1]);
        }
    }
}

int main() {
    Euclid_extended(161, 28);
}
