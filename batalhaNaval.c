#include <stdio.h>
 
int main() {

     printf("JOGO TABULEIRO BATALHA NAVAL\n");
     
     char linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
     for(int j = 0; j < 10; j++) {
        printf("%c ", linha[j]); 

     }
     

     return 0;
    }
    
     //printf("\nA B C D E F G H I j\n");
     //printf("1 0 0 0 0 0 0 0 0 0\n");
     //printf("2 0 0 0 0 0 0 0 0 0\n");
     //printf("3 0 0 0 0 0 0 0 0 0\n");
     //printf("4 0 0 0 0 0 0 0 0 0\n");
     //printf("5 0 0 0 0 0 0 0 0 0\n");
     //printf("6 0 0 0 0 0 0 0 0 0\n");
     //printf("7 0 0 0 0 0 0 0 0 0\n");
     //printf("8 0 0 0 0 0 0 0 0 0\n");
     //printf("9 0 0 0 0 0 0 0 0 0\n");
     //printf("10 0 0 0 0 0 0 0 0 0\n");


 

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
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


