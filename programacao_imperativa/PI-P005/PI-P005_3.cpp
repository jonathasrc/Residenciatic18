# include <iostream>
#include <limits>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(void){
  int a,b,c;

  string result;

  cout << "Por favor informe uma numero: " << endl;
  cin >> a;

  cout << "Por favor informe outro numero: " << endl;
  cin >> b;

  c = a + b; 

  cout << hex << c << endl;
  
  c = a * b;

  cout << oct << c << endl;

  c = a - b;

  c = (c < 0)? -c : c;
  c = abs(a -b);


  if(b == 0){

    cout << "impossivel divisao com zero" << endl;

  } else{

    c = a / b;
    cout << c << endl;
    
  }

  int x;
  
  cout << "Informe um numero inteiro" << endl;
  cin >> x;

  short int minValue = numeric_limits<short int>::min();
  short int maxValue = numeric_limits<short int>::max();

  cout << "O valor de " << x << ((x >= minValue && x <= maxValue) ? " pertence ao range de short int" : " nao pertence ao range short int") << endl;

  return 0; 
}