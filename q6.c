#include <stdio.h>

int eh_impar(int n) {
    return n % 2 != 0;
}

void solicitar_base(int *base) {
    do {
        printf("Digite o número de asteriscos na base da árvore (ímpar e >= 3): ");
        scanf("%d", base);
    } while (!eh_impar(*base) || *base < 3);
}

void solicitar_largura_tronco(int base, int *largura) {
    int metade_base = base / 2;
    do {
        printf("Digite a largura do tronco (ímpar e <= %d): ", metade_base);
        scanf("%d", largura);
    } while (!eh_impar(*largura) || *largura < 1 || *largura > metade_base);
}
void solicitar_altura_tronco(int base, int *altura) {
    int metade_base = base / 2;
    do {
        printf("Digite a altura do tronco (>= 2 e <= %d): ", metade_base);
        scanf("%d", altura);
    } while (*altura < 2 || *altura > metade_base);
}

int main() {
    int B, L, A;

    solicitar_base(&B);
    solicitar_largura_tronco(B, &L);
    solicitar_altura_tronco(B, &A);

    int espacos = B / 2;
    for (int i = 0; i < (B / 2 + 1); i++) {
        for (int j = 0; j < espacos; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }
        printf("\n");
        espacos--;
    }

    int espacos_tronco = B / 2 - L / 2;
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < espacos_tronco; j++) {
            printf(" ");
        }
        for (int k = 0; k < L; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
