#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    int matriz[7][7] = { //Criação do tamanho da matriz de 7 linhas (coordenadas X) e 7 colunas (coordenadas Y);
                                    //coluna 0 //coluna 1 //coluna 2 //coluna 3 //coluna 4 //coluna 5 //coluna 6
        {0,0,0,0,3,0,0}, //Linha 0 
        {0,0,0,0,3,0,0}, //Linha 1
        {0,0,0,0,3,0,0}, //Linha 2
        {0,0,0,0,3,0,0}, //Linha 3
        {0,0,0,0,0,0,0}, //Linha 4
        {0,0,0,0,0,0,0}, //Linha 5
        {0,0,3,3,3,3,0}, //Linha 6
    };
    /*
    0 = Onde não tem navio;
    3 = Onde tem navio;
    */

    printf("Battleship 1 |____/ \n");

    for(int navio = 0, navio_1 = 4 ; navio <=3; navio++){
        printf("Uma parte do navio 1 está localizado nas cooordenadas: X[%d] Y[%d]\n", navio, navio_1); //As coordenadas de X e Y representa uma matriz[X][Y] em que o valor seria 3 = Onde tem uma parte do navio;       
    }

    printf("\n");
    
    printf("Battleship 2 |____/ \n");

    for(int navio = 6, navio_2 = 2 ; navio_2 <= 5; navio_2++){
        printf("Uma parte do navio 2 está localizado nas cooordenadas: X[%d] Y[%d]\n", navio, navio_2); //As coordenadas de X e Y representa uma matriz[X][Y] em que o valor seria 3 = Onde tem uma parte do navio;        
    }

    return 0;
}
