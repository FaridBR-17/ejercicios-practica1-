#include <iostream>
using namespace std;
int mcd(int a, int b) {
    if (b == 0)
        return a;
    return mcd(b, a % b);
}
int main() {
    int num1, num2;
    cout << "Ingrese dos numeros enteros(primer numero -> presiona enter -> segundo numero): ";
    cin >> num1 >> num2;
    int resultado = mcd(num1, num2);
    cout << "El máximo común divisor de " << num1 << " y " << num2 << " es: " << resultado << endl;
    return 0;
}
