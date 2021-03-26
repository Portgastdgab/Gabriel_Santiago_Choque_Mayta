#include <iostream>
#include <vector>

using namespace std;

class AlgoritmoX{
private:
    int clave[2] = {10,9};
    vector <char> palabra;
public:
    vector<char> Cifrado(string& mensaje){
        for (int i = 0; i <= clave[0]*clave[1]-mensaje.size()+1; ++i) {
            mensaje = mensaje + " ";
        }
        for (int i = 0; i < clave[1]; ++i) {
            for (int j = 0; j < clave[0]; ++j) {
                palabra.push_back(mensaje[i+(j*clave[1])]);
            }

        }
        return palabra;
    }
    vector<char> Decifrado(string mensaje){

        for (int i = 0; i < clave[0]; ++i) {
            for (int j = 0; j < clave[1]; ++j) {
                palabra.push_back(mensaje[i+(j*clave[0])]);
            }
        }
        return palabra;
    }

};

int main(){
    string mensaje = "To decrypt, all one must do is wrap the leather strip around the rod and read across";
    vector <char> almacen;
    almacen = AlgoritmoX().Cifrado(mensaje);
    for (int i = 0; i < almacen.size(); ++i) {
        mensaje[i] = almacen[i];
    }
    cout<<"Mensaje cifrado: "<<mensaje<<endl;
    almacen = AlgoritmoX().Decifrado(mensaje);
    for (int i = 0; i < almacen.size(); ++i) {
        mensaje[i] = almacen[i];
    }
    cout<<"Mensaje decifrado: "<<mensaje;


}