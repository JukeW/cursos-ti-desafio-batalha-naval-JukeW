#include <stdio.h>

int main(){
    char linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // 1. Tabuleiro (10x10)
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++){ // Linhas
        for (int j = 0; j < 10; j++){ // Colunas
            tabuleiro[i][j] = 0; // Inicializa todas as posições com 0 (água)
        }
    }

    // 3-1. Barcos Horizontais
    for (int i = 0; i < 3; i++){
        tabuleiro[3][i+2] = 3; // Barco de tamanho 3 na linha 3, colunas 2, 3 e 4
    }

    // 3-2. Barcos Verticais
    for (int j = 0; j < 3; j++){
        tabuleiro[j+2][7] = 3; // Barco de tamanho 3 na coluna 7, linhas 2, 3 e 4
    }

    // 4. Exibindo Tabuleiro
    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");
    for(int i = 0; i < 10; i++){ // Cabeçalho colunas (A a J)
        printf("%c ", linha[i]);
    }
    printf("\n");
    
    for(int i = 0; i < 10; i++){ // Linhas (0 a 9)
        printf("%d ", i);
        for(int j = 0; j < 10; j++){ // Colunas (A a J)
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
