#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

void ordenamientoSeleccion( string palabras[], const int tamanio,
                            bool (*compara)( string, string ) )
{
    int menorOMayor;

    for ( int i = 0; i < tamanio - 1; i++ )
    {
        menorOMayor = i;


        for ( int index = i + 1; index < tamanio; index++ )
            if ( !(*compara)( palabras[menorOMayor], palabras[ index ] ) )
                menorOMayor = index;
        palabras[menorOMayor].swap(palabras[i]);
    }
}

bool ascendente( string a, string b )
{
    return a[0] < b[0];
}

bool descendente( string a, string b ) {
    return a[0] > b[0];
}


int main()
{
    int tamaño = 16;
    int orden;
    int contador;
    string palabras[] = {"Amor","Bueno","Caramelo","Dominio","Enorme","Familia","Gramática","Helio","Inmenso","Joya","Kilo","Lata","Manzana","Naranja","Opuesto","Patria"};
    cout << "Escriba 1 para orden ascendente,\n"
         << "Escriba 2 para orden descendente: ";
    cin >> orden;
    cout << "\nElementos de datos en el orden original\n";

    for ( contador = 0; contador < tamaño; contador++ )
        cout << setw( 4 ) << palabras[ contador ];


    if ( orden == 1 )
    {
        ordenamientoSeleccion( palabras, tamaño, ascendente );
        cout << "\nElementos de datos en orden ascendente\n";
    }
    else
    {
        ordenamientoSeleccion( palabras, tamaño, descendente );
        cout << "\nElementos de datos en orden descendente\n";
    }

    for ( contador = 0; contador < tamaño; contador++ )
        cout << setw( 4 ) << palabras[ contador ]<<"  ";

    cout << endl;
    return 0;
}