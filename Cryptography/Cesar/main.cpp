#include "Cifrado_Descifrado.h"



void swap(int arr[], int pos1, int pos2, string &fre_alf)
{
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
    char temp2 = fre_alf[pos1];
    //cout<<fre_alf[pos1]<<" = "<< fre_alf[pos2]<<endl;
    //cout<<fre_alf[pos2]<<" = "<<temp2<<endl;
    fre_alf[pos1] = fre_alf[pos2];
    fre_alf[pos2] = temp2;


}

void bubbleSort(int arr[], int n, string &fre_alf)
{
    bool vuelta;
    for (int i = 0; i < n-1; i++)
    {
        vuelta = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                swap(arr, j, j+1, fre_alf);
                vuelta = true;
            }
        }
        if (vuelta == false)
            break;
    }
}

void frecuencias(string mensaje) {
    string alf_fre = "abcdefghijklmnopqrstuvwxyz ";
    int frecuencia[alf_fre.size()];
    int contador;
    for (int i = 0; i < Cesar().alfabeto.size(); ++i) {
        contador = 0;
        for (int j = 0; j < mensaje.size(); ++j) {
            if (Cesar().alfabeto[i] == mensaje[j]) {
                contador++;
            }
        }
        frecuencia[i] = contador;
    }
    cout<<"Este es el conteo: ";
    for (int i = 0; i < alf_fre.size(); ++i) {
        cout<<frecuencia[i]<<" ";
    }
}

int main() {
    /*string mensaje = "deja ya de estar rezando y dandote golpes en el pecho lo que quiero que hagas es que salgas al mundo a disfrutar de tu vida quiero que goces que cantes que te diviertas y que disfrutes de todo";
    mensaje = Cesar().Cifrado(mensaje);
    cout << "Cifrado: " << mensaje << endl;
    //mensaje = Cesar().Descifrado(mensaje);
    //cout<<"Descifrado: "<<mensaje;*/
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    string alfabet= "abcdefg";
    bubbleSort(arr, n, alfabet);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; ++i) {
        cout<<alfabet[i]<<" ";
    }

}
