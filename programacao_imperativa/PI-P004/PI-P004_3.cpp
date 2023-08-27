# include <iostream>
#include <limits>

using namespace std;

int main(void){
    //A
    int inteiro;
    int minValue = numeric_limits<int>::min();
    int maxValue = numeric_limits<int>::max();

    cout << "o tipo int ocupa: " << sizeof(int) << "\n";
    cout<< "O menor valor representável por um int é: " << minValue << endl;
    cout << "O maior valor representável por um int é: " << maxValue << endl;

    //B
    cout << "B" << "\n";

    unsigned long int uli;
    unsigned long int minValueUli = numeric_limits<unsigned long int>::min();
    unsigned long int maxValueUli = numeric_limits<unsigned long int>::max();

    cout << "o tipo unsigned long int ocupa: " << sizeof(unsigned long int) << "\n";
    cout << "O menor valor representável por um unsigned long int é: " << minValueUli << endl;
    cout << "O maior valor representável por um unsigned long int int é: " << maxValueUli << endl;

    //C
    cout << "C" << "\n";

    /* long int pode receber valores positivos e negativos então o tamanho de armazenamtno vale para todo esse range.
        unsigned long int so aceita valores positivos e o armazenamento aumenta o range para valores positivos.
        Acaba passando do limite daquela variavel em questão
    */
    long int longInt;
    unsigned long int unsigneLongInt = 5;

    longInt = unsigneLongInt;
    unsigneLongInt = longInt;

    cout << "long int: " << longInt << endl;
    cout << "Unsigned long int: " << endl;

    //D
    cout << "D" << "\n";
    
    long int minValueLongint = numeric_limits<long int>::min();
    long int maxValueLongint = numeric_limits<long int>::max();

    cout << "o tipo long int ocupa: " << sizeof(long int) << "\n";
    cout << "O menor valor representável por um long int é: " << minValueLongint << endl;
    cout << "O maior valor representável por um long int int é: " << maxValueLongint << endl;

    
    //E
    cout << "E" << "\n";

    unsigned int unsignedInt;
    longInt = 6;

    unsignedInt = longInt;
    longInt = unsignedInt;

    cout << "Unsigned int: " << unsignedInt << endl;
    cout << "long int: " << longInt << endl;

     /* Deu certo.
        Como long int armazena um valor consideral e está dentro do range do unsingned int funcionou mas resultados podem ser imprevisiveis
     
      */
    //F
    cout << "F" << "\n";
    unsigned int minValueLongint = numeric_limits<unsigned int>::min();
    unsigned int maxValueLongint = numeric_limits< int>::max();

    cout << "o tipo long int ocupa: " << sizeof(long int) << "\n";
    cout << "O menor valor representável por um long int é: " << minValueLongint << endl;
    cout << "O maior valor representável por um long int int é: " << maxValueLongint << endl;


    return 0;
}