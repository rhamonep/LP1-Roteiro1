#include <iostream>

int main(){
    int resposta;
    int tentativa;

    srand(time(NULL));

    resposta = 1 + rand() % 100;

    do{
        std::cout << "Digite um número de 1 a 100:  " << std::endl;
        std::cin >> tentativa;

        if(tentativa > resposta){
            std::cout << "\nMuito alto. Tente novamente!\n" << std::endl;
        }else if(tentativa < resposta){
            std::cout << "\nMuito baixo. Tente novamente!\n" << std::endl;
        }
    }while(tentativa != resposta);

    std::cout << "\nParábens. Você adivinhou o número.\n" << std::endl;
}