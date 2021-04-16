#include <NTL/ZZ.h>

using namespace std;

using namespace NTL;

int main()

{

    ZZ a,b;

    cin>>a>>b;

    cout<<a*b;

    return 0;

}

















/*#include <iostream>

using namespace std;

int modulo(int a, int n){
    int r = a-n*(a/n);
    r = r+(r<0)*n;
    return r;
}

int Euclides(int a, int b){
    if (modulo(a, b) == 0){
        return b;
    }
    else   {
        int temp = b;
        b = modulo(a, b);
        a = temp;
        Euclides(a,b);
    }

}

int main() {
    int mcd = Euclides(25, 5);
    cout<<mcd;
}*/
