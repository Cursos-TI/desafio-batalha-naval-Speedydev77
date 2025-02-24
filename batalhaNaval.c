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


    
    //Constantes para evitar repetição de valores e facilitar a leitura do código;

    #define linhas10 10
    #define colunas10 10

    #define linhas0 0
    #define colunas0 0

    #define linhas1 1
    #define colunas1 1

    #define linhas2 2
    #define colunas2 2

    #define linhas4 4
    #define colunas4 4

    #define linhas8 8
    #define colunas8 8

    #define linhas9 9
    #define colunas9 9

    int matriz[linhas10][colunas10] = { //Criação do tamanho da matriz de 10 linhas (coordenadas X) e 10 colunas (coordenadas Y);
                                    //coluna 0 //coluna 1 //coluna 2 //coluna 3 //coluna 4 //coluna 5 //coluna 6 //coluna 7 //coluna 8 //coluna 9
    {0,3,0,0,0,3,0,0,0,0}, //Linha 0
    {0,3,0,0,0,0,3,0,0,0}, //Linha 1
    {0,3,0,0,0,0,0,3,0,0}, //Linha 2
    {0,3,0,0,0,0,0,0,3,0}, //Linha 3
    {0,0,0,3,0,0,0,0,0,0}, //Linha 4
    {0,0,3,0,0,0,0,0,0,0}, //Linha 5
    {0,3,0,0,0,0,0,0,0,0}, //Linha 6
    {3,0,0,0,3,3,3,3,0,0}, //Linha 7
    {0,0,0,0,0,0,0,0,0,0}, //Linha 8
    {0,0,0,0,0,0,0,0,0,0}  //Linha 9
    };
    /*
    0 = Onde não tem navio;
    3 = Onde tem navio;
    */

    /*
    4 navios = vertical, horizontal, diagonal(cima), diagonal(baixo);
    As estruturas de repetição otimiza o uso de vetores e matrizes;
    As constantes representam valores inteiros de linhas[X] e colunas[Y];
    Coordenada [X] = a
    Coordenada [Y] = b
    Quando o valor de [linhas] precisa ser constante e [colunas] precisa ser variável e incrementado, ou vice-versa = for aninhado com for é utilizado; 
    Quando o valor de [linhas] e [colunas] precisa ser alterados ao mesmo tempo e testar apenas um [X] para cada [Y] = for aninhado com while é utilizado;
    */

    printf("Battleship 1 |_____/ - Vertical \n"); //navio vertical

    for(int a = 0; a < linhas4; a++){
        for(int b = 1; b < colunas2; b++ ){
            matriz[a][b];
            printf("Parte do navio 1 está localizado na coordenada:X[%d]Y[%d]\n", a, b);

        }
    }

    printf("\n");

    printf("Battleship 2 |_____/ - Horizontal \n"); //navio horizontal

    for(int a = 7; a < linhas8; a++){
        for(int b = 4; b < colunas8; b++ ){
            matriz[a][b];
            printf("Parte do navio 2 está localizado na coordenada:X[%d]Y[%d]\n", a, b);

        }
    }

    printf("\n");

    printf("Battleship 3 |_____/ - Diagonal Cima \n"); //navio diagonal cima

    for(int a = 0, b = 5; a < linhas4; a++, b++){
        while(b < colunas9){
            matriz[a][b];
            printf("Parte do navio 3 está localizado na coordenada:X[%d]Y[%d]\n", a, b);
            break;
        }
    }

    printf("\n");

    printf("Battleship 4 |_____/ - Diagonal Baixo \n"); //navio diagonal baixo

    for(int a = 4, b = 3; a < linhas8; a++, b--){
        while(b >= colunas0){
            matriz[a][b];
            printf("Parte do navio 4 está localizado na coordenada:X[%d]Y[%d]\n", a, b);
            break;
        }
    }

    printf("\n");




    //Exibição do tabuleiro de forma ordenada em linhas[x] e colunas[y];
    
    for(int x = 0; x < linhas10; x++){
        for(int y = 0; y < colunas10; y++){

            printf("%d  ", matriz[x][y]); //Para cada x(0 a 9) será executado um bloco de código de y(0 a 9);
        }
        printf("\n");
    }




    printf("\n");

    printf("\nÁrea com habilidades:\n");

    printf("\n===== Cone ^ =====\n");

    /*
    Declaração das variáveis de 3 matrizes para as 3 habilidades:
    1 - Cone
    2 - Octaedro
    3 - Cruz
    */

    //Declaração de variáveis:

    int cone[linhas10][colunas10];
    int octaedro[linhas10][colunas10];
    int cruz[linhas10][colunas10];

    //A inicialização de valores é feita dentro do loop aninhado;

    for(int x = 0; x < linhas10; x++){
        for(int y = 0; y < colunas10; y++){

            cone[x][y] = 0; //Para que todos os valores inicializem com 0: matriz[x][y] = 0, onde atribuí 0 para todos os valores;


            if(cone[x][y] == 0){ //Se a condição for "true", os valores das coordenadas definidas serão iguais a 1;

                //Ao juntar todas as coordenadas com valor = 1, a exibição terá formato de cone; 

                cone[3][4] = 1;

                cone[4][3] = 1;
                cone[4][4] = 1;
                cone[4][5] = 1;

                cone[5][2] = 1;
                cone[5][3] = 1;
                cone[5][4] = 1;
                cone[5][5] = 1;
                cone[5][6] = 1;

                printf("%d  ", cone[x][y]);

            }

        }
        printf("\n");
    }



    printf("\n===== Octaedro <> =====\n");

    for(int x = 0; x < linhas10; x++){
        for(int y = 0; y < colunas10; y++){

            octaedro[x][y] = 0; //Para que todos os valores inicializem com 0: matriz[x][y] = 0, onde atribuí 0 para todos os valores;

            if(octaedro[x][y] == 0){ //Se a condição for "true", os valores das coordenadas definidas serão iguais a 1;

                //Ao juntar todas as coordenadas com valor = 1, a exibição terá formato de octaedro;

                octaedro[3][4] = 1;

                octaedro[4][3] = 1;
                octaedro[4][4] = 1;
                octaedro[4][5] = 1;

                octaedro[5][4] = 1;

                printf("%d  ", octaedro[x][y]);

            }
    
        }
        printf("\n");
    }



    printf("\n===== Cruz + =====\n");

    for(int x = 0; x < linhas10; x++){
        for(int y = 0; y < colunas10; y++){

            cruz[x][y] = 0; //Para que todos os valores inicializem com 0: matriz[x][y] = 0, onde atribuí 0 para todos os valores;

            if(cruz[x][y] == 0){ //Se a condição for "true", os valores das coordenadas definidas serão iguais a 1;

                //Ao juntar todas as coordenadas com valor = 1, a exibição terá formato de cruz;

                cruz[3][4] = 1;

                cruz[4][2] = 1;
                cruz[4][3] = 1;
                cruz[4][4] = 1;
                cruz[4][5] = 1;
                cruz[4][6] = 1;

                cruz[5][4] = 1;

                printf("%d  ", cruz[x][y]);

            }
            
        }
        printf("\n");
    }

    

    return 0;
}
