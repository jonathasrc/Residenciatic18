# include <iostream>
using namespace std;


/* Crie um arquivo chamado meuprog1.cpp contendo um programa em C++ que peça o
nome_do_usuário e mostre a mensagem “Bom dia <nome_do_usuário> */

int main(void){
    string nomeUsuario;
    cout << "Por favor, informe nome usuario:";
    
    cin >> nomeUsuario;
    cout << "Bom dia " << nomeUsuario << endl;

    return 0;
}