#include <iostream>

#define QUANTIDADE_FACES 6

int lancaDado(){
    return 1 + rand() % 6;
}

int main(){
    int lancamentosDado[QUANTIDADE_FACES] = {};
    int quantidadeLancamentos;

    srand(time(NULL));

    std::cout << "Digite a quantidade de lançamentos: " << std::endl;
    std::cin >> quantidadeLancamentos;

    for(int i = 0; i < quantidadeLancamentos; i++){
        int valorDado = lancaDado();
        lancamentosDado[valorDado-1] += 1;
    }

    for(int i = 0; i < QUANTIDADE_FACES; i++){
        float porcentagemLancamento = ( (float) lancamentosDado[i] / quantidadeLancamentos) * 100;
        std::cout << "\nQuantidade de vezes que \"" << i+1 << "\" saiu: " << porcentagemLancamento << "%" << std::endl;
    }
}