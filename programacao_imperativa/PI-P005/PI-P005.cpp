# include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main(void){
  char ch1, ch2, ch3;
  string result;

  cout << "Por favor informe uma letra: " << endl;

  cin >> ch1;

  cout << result << endl;

  result = (ch1>= 'A' && ch1<= 'Z') ? "letra maiúscula" :
            (ch1>= 'a' && ch1<= 'z') ? "letra minúscula" :
            (ch1>= '0' && ch1<= '9') ? "dígito" : "outro tipo de caractere";

  cout << result << endl;

  ch2 = 82;
  cout << "Caractere: " << ch2 << ", Código numérico: " << int(ch2) << endl;
  cout << "Caractere: " << ch2 << ", Código numérico: " << dec << int(ch2) << endl;
  cout << "Carctere: " << ch2 << ", Código numérico: " << oct << int(ch2) << endl;

  
  ch3 = 'r';
  cout << "Caractere: " << ch3 << ", Código numérico: " << int(ch3) << endl;
  cout << "Caractere: " << ch3 << ", Código numérico: " << dec << int(ch3) << endl;
  cout << "Carctere: " << ch3 << ", Código numérico: " << oct << int(ch3) << endl;



  return 0; 
}