#include <iostream>
using namespace std;

int division(int a, int n){
   int r = a-n*(a/n); //Halla el residuo sin necesidad de usar modulo "%"
   r = r+(r<0)*n; //Vuelvo a hallar el residuo por si r antes era negativo
   return r;
}

int main() {
    int residuo = division(-255,11);
    cout<<residuo;
}

