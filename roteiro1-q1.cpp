#include <iostream>

int main(){

    int entrada;
    int contador = 0;
    int maior;

    do{
        std::cout << "Digite o " << contador+1 << "º valor (0 para parar): " << std::endl;
        std::cin >> entrada;

        if(contador == 0){
            maior = entrada;
        }else if(entrada > maior){
            maior = entrada;
        }
        contador++;
    }while(entrada != 0);

    std::cout << "\nO maior valor é: " << maior << "." << std::endl; 
}