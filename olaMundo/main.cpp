#include <iostream>

void ln(){
    std::cout << "\n";
}

void opBas(){
    int primeiro, segundo;

    std::cout << "Insira dois numeros para realizar a conta: \n";
    std::cin >> primeiro;
    std::cin >> segundo;

    int mult = primeiro * segundo;
    int div = primeiro / segundo;
    int sub = primeiro - segundo;
    int soma = primeiro + segundo;

    std::cout << "\n" "O valor da multiplicacao eh de: \n" << mult;
    std::cout << "\n" "O valor da divisao eh de: \n" << div;
    std::cout << "\n" "O valor da soma eh de:\n" << soma;
    std::cout << "\n" "O valor da subtracao eh de:\n" << sub;

    std::cout << "\n";
}


int main(){
    opBas();

    ln();
}
