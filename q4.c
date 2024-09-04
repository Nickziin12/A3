#include <stdio.h>

int main() {
    int altura;
    char tipo;

    printf("Digite a altura do quadrado: ");
    scanf("%d", &altura);

    if (altura < 2) {
        printf("A altura deve ser maior ou igual a 2.\n");
        return 1;
    }

    printf("Digite 'p' para quadrado preenchido ou 'v' para quadrado vazado: ");
    scanf(" %c", &tipo);

    
    if (tipo != 'p' && tipo != 'v') {
        printf("Tipo invalido. Use 'p' para preenchido ou 'v' para vazado.\n");
        return 1;
    }

  
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            if (tipo == 'p') {
           
                printf("*");
            } else if (tipo == 'v') {
         
                if (i == 0 || i == altura - 1 || j == 0 || j == altura - 1) {
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
