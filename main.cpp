#include <iostream>
#include <bitset>
int main()
{
    // descobrir o status de um determinado bit em um char;
    char a  = 0b0010;    

    for (size_t i = 0; i < 4; i++)
    {
        if(a & (1<<i) )
            std::cout << "O BIT DA POSICAO " << i << " está ligado" << std::endl;
        else
            std::cout << "O BIT DA POSICAO " << i << " está desligado" << std::endl;
    }
    std::cout <<std::endl;

    // extraindo o valor decimal de 3 bits a partir da posição 5

    int mascara3BitsAPartirdaPosicao5 = 0b011100000;
    int valor   = 0b011000000;

    int extracao = (valor & mascara3BitsAPartirdaPosicao5);
    extracao = extracao >> 5;

    std::cout << " Extração: " << std::bitset<8>(extracao) << std::endl;

    // definir o numero binario 101 (5 em decimal) a partir da posição 2 de um binário vazio

    int x = 0b00000000;
    int y = 0b101;

    x |= y << 2;    
    std::cout << "Valor atualizado de x: " << std::bitset<8>(x) << std::endl;

    auto limpadorDoBit5 = 0b00010000;

    //limpando o bit 5 de x:
    std::cout << "Valor do limpador: " << std::bitset<8>(limpadorDoBit5) << std::endl;

    x &= ~(limpadorDoBit5);

    std::cout << "Valor do X depois de limpar o bit 5: " << std::bitset<8>(x) << std::endl;

    std::cout << " FIM" << std::endl;
    return 0;
}