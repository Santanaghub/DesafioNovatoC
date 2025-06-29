#include <stdio.h>

int main(){
  char vertical[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
  // 1. Criando o Tabuleiro (Matrix 10x10)
  int tabuleiro[10][10]; // 2. valores 0 para agua e 3 para posição dos navios
  int linha;
 // 3. exibindo o tabuleiro
  printf("   BATALHA NAVAL \n");
    printf("");
    for(int j = 0; j < 10; j++){ // 4. imprimir a linha do cabeçalho
        printf("%c ", vertical[j]); // imprime os numeros das colunas
    }
    printf("\n"); // 5. pular uma linha

    for (int i = 0; i < 10; i++){
      for(int j = 0; j < 10; j++){
        tabuleiro [i][j] = 0;
            while (linha <= i){
            linha++;
            printf("%d ", linha);
            }
        printf("%d ", tabuleiro[i][j] = 0);
        }
        printf("\n");
        }

    return 0;

}

