#include <iostream>
#include <cstring>

using std::strtok;
using namespace std;

int main() {
    string texto = "La.ciencia,computacional;(o:computacion?cientifica)es!el.campo*de(estudio.que)trata[con]la-construccion_de.modelos.matematicos";
    char *tokens;
    for (int i = 0; i < texto.size(); ++i) {
        if (texto[i] == '.' or texto[i] == ',' or texto[i] == ';' or texto[i] == ':' or texto[i] == '?' or
            texto[i] == '!' or texto[i] == '(' or texto[i] == ')' or texto[i] == '[' or texto[i] == ']' or
            texto[i] == '-' or texto[i] == '_' or texto[i] == '*' or texto[i] == '*') {
            texto.replace(i, 1, " ");
        }
    }
    cout<<"Sin signos de puntuacion: "<<texto<<endl;
    char conversion[texto.size()];
    for (int i = 0; i < texto.size(); ++i) {
        conversion[i] = texto[i];
    }
    cout<<endl<<"Division en tokens: "<<endl;
    tokens = strtok(conversion, " ");
    while (tokens != NULL) {
        cout << tokens <<endl;
        tokens = strtok(NULL, " ");
    }
}
