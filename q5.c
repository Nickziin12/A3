#include <stdio.h>

int main() {
    int altura;
    char tipo;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    if (altura < 2) {
        printf("A altura deve ser maior ou igual a 2.\n");
        return 1;
    }

    printf("Digite 'p' para triangulo preenchido ou 'v' para triangulo vazado: ");
    scanf(" %c", &tipo);

    if (tipo != 'p' && tipo != 'v') {
        printf("Tipo invalido. Use 'p' para preenchido ou 'v' para vazado.\n");
        return 1;
    }

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            if (tipo == 'p') {
            
                printf("*");
            } else if (tipo == 'v') {
                
                if (i == altura || j == 1 || j == i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
