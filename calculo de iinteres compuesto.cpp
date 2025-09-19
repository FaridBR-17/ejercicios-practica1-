#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double A, r;
    int  P , n, t;
    cout << "Ingrese cantidad invertida: ";
    cin >> P;
    cout << "Ingrese la tasa de interes en decimal: ";
    cin >> r;
    cout << "ingrese el numero de años: ";
    cin >> n;
    cout << "Ingrese el numero de años que se va a dejar el dinero invertido: ";
    cin >> t;
    A= P * pow((1 + r/n), n * t);
    cout << "RESULTADOS:" << endl;
    cout << "cantidad invertida: $" << P << endl;
    cout << "Tasa de interes: : " << (r * 100) << "%" << endl;
    cout << "número de veces que se aplica el interés al año: " << n << endl;
    cout << "Tiempo: " << t << " años" << endl;
    cout << "Monto final: $" << A << endl;
    return 0;
}