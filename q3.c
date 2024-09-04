#include <stdio.h>

int main() {
    int largura;

    printf("Digite a largura central do losango (um numero impar >= 3): ");
    scanf("%d", &largura);


    if (largura < 3 || largura % 2 == 0) {
        printf("A largura central deve ser um numero impar e maior ou igual a 3.\n");
        return 1;
    }

    int meio = largura / 2;

  
    for (int i = 0; i <= meio; i++) {
        
        for (int j = 0; j < meio - i; j++) {
            printf(" ");
        }
       
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = meio - 1; i >= 0; i--) {
      
        for (int j = 0; j < meio - i; j++) {
            printf(" ");
        }
        
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
