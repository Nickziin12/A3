#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor de N (deve ser >= 2): ");
    scanf("%d", &N);

    
    if (N < 2) {
        printf("O valor de N deve ser maior ou igual a 2.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
       
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
