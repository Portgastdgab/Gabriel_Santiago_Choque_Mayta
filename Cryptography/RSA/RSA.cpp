#include "RSA.h"

RSA::RSA(int bits){
    vector <int> random_prime = prime_bits(bits);
    p = random_prime[module(random(123, 123+random_prime.size()), random_prime.size()-1)];
    q = random_prime[module(random(321, 321+ random_prime.size()), random_prime.size()-1)];
    e = random_prime[random(0, random_prime.size()-1)];
    N = p*q;
    while (mcd(e, N) != 1){
        e = random_prime[random(0, random_prime.size()-1)];
    }
    d = inverse(e, ((p-1)*(q-1)));
    cout<<"El valor de \"p\" es: "<<p<<endl;
    cout<<"El valor de \"q\" es: "<<q<<endl;
    cout<<"El valor de \"e\" es: "<<e<<endl;
    cout<<"El valor de \"d\" es: "<<d<<endl;
    cout<<"El valor de \"N\" es: "<<N<<endl;
}

RSA::RSA(int a, int b) {
    e = a;
    N = b;
}

void RSA::chiper(string mssg) {
    for (int i = 0; i < mssg.size(); ++i) {
        encrypted_letter.push_back(modular_exponentiation(alfabeto.find(mssg[i]), e, N));
    }
}

string RSA::dechiper(vector <int> letters){
    for (int i = 0; i < letters.size(); ++i) {
        message.push_back(alfabeto[modular_exponentiation(letters[i], d, N)]);
    }
}

void RSA::show_encryption(){
    cout<<endl<<"Mensaje cifrado: ";
    for (int i = 0; i < encrypted_letter.size(); ++i) {
        cout<<encrypted_letter[i];
    }
}

void RSA::show_decryption() {
    cout << endl << "Mensaje decifrado: ";
    for (int i = 0; i < message.size(); ++i) {
        cout << message[i];
    }
}