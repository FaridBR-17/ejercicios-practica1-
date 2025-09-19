#include <iostream>
using namespace std;
int mcd(int a, int b) {
    if (b == 0)
        return a;
    return mcd(b, a % b);
}
int main() {
    int numero1, numero2;
    cout << "Ingrese dos numeros enteros(primer numero -> presiona enter -> segundo numero): ";
    cin >> numero1 >> numero2;
    int resultado = mcd(numero1, numero2);
    cout << "El máximo común divisor de " << numero1 << " y " << numero2 << " es: " << resultado << endl;
    return 0;
}
