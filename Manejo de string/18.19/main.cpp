#include <iostream>
using namespace std;

int main() {
    string palabra = "GabrielSantiag";
    palabra.insert((palabra.size()/2), "******");
    cout<<palabra;
}
