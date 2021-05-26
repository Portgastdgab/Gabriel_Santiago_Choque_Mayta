#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> criba_eratostenes(int limit)
{
    vector<int> criba;
    int prime_found;  // primos que se vayan encontrando

    // llenando el vector desde 2 hasta limit
    for (int i = 2; i <= limit; i++)
        criba.push_back(i);

    if (limit == 2 || limit == 3)
        return criba;

    // iteradores para la seleccion
    vector<int>::iterator it = criba.begin();
    vector<int>::iterator it2;
    prime_found = *it;  // El primer primo es 2

    while (prime_found*prime_found < limit)
    {
        it2 = it + 1;

        for(; it2 <= criba.end(); it2++) //Borra multiplos de los primos hallados
            if(*it2 % prime_found == 0)
                criba.erase(it2);
        it++;
        prime_found = *it;
    }

    return criba;
}


vector <int> prime_bits(int bit){ //devuelve los elementos primos segun el numero de bits que pide
    vector <int> primos = criba_eratostenes(pow(2, bit)-1);
    vector<int>::iterator it = primos.begin();
    while (*it < pow(2, bit)/2){
        primos.erase(it);
    }
    return primos;
};

int main() {
    vector <int> criba = criba_eratostenes(40);
    vector <int> bits = prime_bits(5);
    for (int i = 0; i < criba.size(); ++i) {
        cout<<criba[i]<<"    ";
    }
    cout<<endl<<endl;
    for (int i = 0; i < bits.size(); ++i) {
        cout<<bits[i]<<"    ";
    }
}
