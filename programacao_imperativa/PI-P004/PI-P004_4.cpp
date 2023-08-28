# include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main(void){
    cout << "A" << "\n";

    float minValue = numeric_limits<float>::min();
    float maxValue = numeric_limits<float>::max();

    cout << "o tipo float tem o tamanho : " << sizeof(float) << "\n";
    cout << "O menor valor representável por um float é: " << minValue << endl;
    cout << "O maior valor representável por um floaté: " << maxValue << endl;

    
    cout << "B" << "\n";

    float pif = 3.14159265358979323846;
    cout << "Numero de pi achado no goolge: " << pif << endl;


    cout << "C e D" << "\n";

    double pid = 3.14159265358979323846;
    cout << "Numero de pi achado no double: " << pid << endl;
    cout << fixed << setprecision(2) << pid << endl;
    cout << fixed << setprecision(4) << pid << endl;
    cout << fixed << setprecision(8) << pid << endl;
    cout << fixed << setprecision(16) << pid << endl;

    cout << "E" << "\n";
    /* Float imprime apenas 5 casas decmais depois da virgula */

    double d = 0.1;
    long double ld = 0.1;

    cout << setprecision(20);
    cout << "double: " << d << endl;
    cout << "long double: " << ld << endl;


  return 0;
}