#include <iostream>
#include <cstring>

using std::strtok;
using namespace std;

int modulo(int a, int n) {
    int r = a - n * (a / n);
    r = r + (r < 0) * n;
    return r;
}

int main() {
    string texto;
    float bloque;
    char* tokens;
    cout<<"Ingrese la cadena:";
    cin>>texto;
    cout<<"Ingrese el tamano del bloque:";
    cin>>bloque;

    for (int i = bloque; i < texto.size(); i+=(bloque+1)) {
        texto.insert(i, " ");
    }

    char conversion[texto.size()];
    for (int i = 0; i < texto.size()+1; ++i) {
        conversion[i] = texto[i];
    }
    string temp;
    cout<<endl<<"Division en tokens: "<<endl;
    tokens = strtok(conversion, " ");
    texto = "";
    string vectores[4];
    int cont;
    while (tokens != NULL) {
        temp = tokens;
        vectores[cont] = tokens;
        while (temp.size()<4){
            temp.push_back('X');
        }
        texto.append(temp+"*");
        cout << temp <<endl;
        tokens = strtok(NULL, " ");
        cont++;
    }
    texto.erase(texto.size()-1);
    cout<<"Texto con asteriscos: "<<texto;
    cout<<"vectores: "<<endl;
    for (int i = 0; i < 4; ++i) {
        cout<<vectores[i]<<" ";
    }
}