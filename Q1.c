#include <stdio.h>

unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) return 1;
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}
unsigned long long coeficiente_binomial(int n, int k) {
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}


void imprimir_triangulo(int altura) {
    for (int i = 0; i < altura; i++) {

        for (int j = 0; j < altura - i - 1; j++) {
            printf("   ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%4llu", coeficiente_binomial(i, j));
        }
        printf("\n");
    }
}

int main() {
    int altura;
    
   
    printf("Digite a altura do Triangulo de Pascal: ");
    scanf("%d", &altura);

    if (altura < 1) {
        printf("A altura deve ser um numero inteiro positivo.\n");
        return 1;
    }

    imprimir_triangulo(altura);

    return 0;
}
