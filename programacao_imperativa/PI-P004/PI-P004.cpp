# include <iostream>
using namespace std;

int main(void){
    
    // Configurar a localização para lidar com caracteres especiais
    std::locale::global(std::locale(""));

    // Caracteres especiais em Unicode: 'ç' e 'ã'
    wchar_t cedilla = L'ç';
    wchar_t tilde = L'ã';

    // Imprimir os caracteres especiais
    std::wcout << L"Caractere especial ç: " << cedilla << std::endl;
    std::wcout << L"Caractere especial ã: " << tilde << std::endl;

    // Configurar a saída para exibir códigos numéricos em hexadecimal
    std::wcout << std::hex << std::uppercase;

    // Imprimir os códigos numéricos dos caracteres especiais
    std::wcout << L"Código numérico (ç): " << int(cedilla) << std::endl;
    std::wcout << L"Código numérico (ã): " << int(tilde) << std::endl;

    char c;

    cout << "Informe um caractere: " << endl;
    cin >> c;
    
    cout << "Caractere: " << c << ", Código numérico: " << int(c) << std::endl;
    cout << "Caractere: " << c << ", Código numérico: " << dec << int(c) << std::endl;
    cout << "Caractere: " << c << ", Código numérico: " << oct << int(c) << std::endl;

/*     for (char c = '0'; c <= '9'; ++c) {
        // Imprimir o caractere como caractere
        cout << "Caractere: " << c << ", Código numérico: " << int(c) << std::endl;
        std::cout << "Código numérico (decimal): " << std::dec << int(c) << std::endl;
        std::cout << "Código numérico (octal): " << std::oct << int(c) << std::endl;
    
    } */
    cout << "Caractere: " << '0' << ", Código numérico: " << int('0') << std::endl;
    cout << "Caractere: " << '0' << ", Código numérico: " << dec << int('0') << std::endl;
    cout << "Caractere: " << '0' << ", Código numérico: " << oct << int('0') << std::endl;

    cout << "Caractere: " << '1' << ", Código numérico: " << int('1') << std::endl;
    cout << "Caractere: " << '1' << ", Código numérico: " << dec << int('1') << std::endl;
    cout << "Caractere: " << '1' << ", Código numérico: " << oct << int('1') << std::endl;
    
    cout << "Caractere: " << '2' << ", Código numérico: " << int('2') << std::endl;
    cout << "Caractere: " << '2' << ", Código numérico: " << dec << int('2') << std::endl;
    cout << "Caractere: " << '2' << ", Código numérico: " << oct << int('2') << std::endl;
    
    cout << "Caractere: " << '3' << ", Código numérico: " << int('3') << std::endl;
    cout << "Caractere: " << '3' << ", Código numérico: " << dec << int('3') << std::endl;
    cout << "Caractere: " << '3' << ", Código numérico: " << oct << int('3') << std::endl;

    cout << "Caractere: " << '4' << ", Código numérico: " << int('4') << std::endl;
    cout << "Caractere: " << '4' << ", Código numérico: " << dec << int('4') << std::endl;
    cout << "Caractere: " << '4' << ", Código numérico: " << oct << int('4') << std::endl;
    
    cout << "Caractere: " << '5' << ", Código numérico: " << int('5') << std::endl;
    cout << "Caractere: " << '5' << ", Código numérico: " << dec << int('5') << std::endl;
    cout << "Caractere: " << '5' << ", Código numérico: " << oct << int('5') << std::endl;

    cout << "Caractere: " << '6' << ", Código numérico: " << int('6') << std::endl;
    cout << "Caractere: " << '6' << ", Código numérico: " << dec << int('6') << std::endl;
    cout << "Caractere: " << '6' << ", Código numérico: " << oct << int('6') << std::endl;
    
    cout << "Caractere: " << '7' << ", Código numérico: " << int('7') << std::endl;
    cout << "Caractere: " << '7' << ", Código numérico: " << dec << int('7') << std::endl;
    cout << "Caractere: " << '7' << ", Código numérico: " << oct << int('7') << std::endl;
    
    cout << "Caractere: " << '8' << ", Código numérico: " << int('8') << std::endl;
    cout << "Caractere: " << '8' << ", Código numérico: " << dec << int('8') << std::endl;
    cout << "Caractere: " << '8' << ", Código numérico: " << oct << int('8') << std::endl;

    cout << "Caractere: " << '9' << ", Código numérico: " << int('9') << std::endl;
    cout << "Caractere: " << '9' << ", Código numérico: " << dec << int('9') << std::endl;
    cout << "Caractere: " << '9' << ", Código numérico: " << oct << int('9') << std::endl;

    return 0;
}