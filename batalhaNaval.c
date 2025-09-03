#include <stdio.h>

# define TAMANHO 3

int main(){
    char linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // 1. Tabuleiro (10x10)
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++){ // Linhas
        for (int j = 0; j < 10; j++){ // Colunas
            tabuleiro[i][j] = 0; // Inicializa todas as posições com 0 (água)
        }
    }

    // 2-1. Barcos Horizontais
    for (int i = 0; i < TAMANHO; i++){
        tabuleiro[3][i+2] = 3; // Barco de tamanho 3 na linha 3, colunas 2, 3 e 4
    }

    // 2-2. Barcos Verticais
    for (int j = 0; j < TAMANHO; j++){
        tabuleiro[j+2][7] = 3; // Barco de tamanho 3 na coluna 7, linhas 2, 3 e 4
    }

    // 2-3. Barco Diagonal Subindo
    for (int i = 0; i < TAMANHO; i++){
        tabuleiro[9-i][1+i] = 3;
    }
    
    // 2-3. Barco Diagonal Descendo
    for (int i = 0; i < TAMANHO; i++){
        tabuleiro[7+i][5+i] = 3;
    }
    

    // 3. Exibindo Tabuleiro
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

