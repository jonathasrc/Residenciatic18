#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;


int main(void){
    float a, b;

    float soma, subtracao, multiplicacao, divisao;

    cout << "Por favor, informe dois numeros" << endl;
    cout << "Informe primeiro numero: ";
    cin >> a;

    cout << "Informe segundo numero: ";
    cin >> b;
    
    soma = (float) a + b;
    subtracao = (float) a - b;
    multiplicacao = (float) a * b;
    divisao = (float) a / b;

    cout << "Soma: " << soma << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Multiplicação: " << multiplicacao << endl;
    // cout << "Divisão: " << std::setprecision(2) << divisao << endl;
    cout << "Divisão: " <<  divisao << endl;

    // style C
    printf("%.1f", divisao);      

    return 0;
}
