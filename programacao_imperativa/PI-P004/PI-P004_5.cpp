# include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main(void){

  /* Por definição, true tem o valor 1
quando convertido em um inteiro e
false tem o valor 0.
Da mesma forma, inteiros podem ser
convertidos implicitamente em valores
booleanos: inteiros diferentes de zero
são convertidos em true e 0
converte para false. */

  if (2){
    cout << "Valores maiores que 1 e 1 são convertidos para true" << endl;
  }else{
    cout << "Não são convertidos" << endl;
  }
  
  if (0){
    cout << "São convertidos em false"<< endl;
  }else{
    cout << "Não são convertidos em false" << endl;
  }



  return 0;
}