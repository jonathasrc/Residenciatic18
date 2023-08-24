# include <iostream>
using namespace std;


int main(void){
    float a, b;

    cout << "Por favor, informe dois numeros" << endl;
    cout << "Informe primeiro numero: ";
    cin >> a;

    cout << "Informe segundo numero: ";
    cin >> b;

    cout << "Soma: " << a + b << endl;
    cout << "Subtração: " << a - b << endl;
    cout << "Multiplicação: " << a * b << endl;
    cout << "Divisão: " << a / b << endl;
    cout << "Resto: " << a % b << endl;

    // cout << "Resto" << a % b << endl;

    return 0;
}