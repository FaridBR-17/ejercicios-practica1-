#include <iostream>
using namespace std;
int main() {
    int arreglar[5] = {4,7,9,10,20};
    int suma = 0;
    for(int i = 0; i < 5; i++) {
        suma += arreglar[i];
    }
    cout <<"Al sumar estos arreglos da como resultado: " <<suma<<endl;
    return 0;
}