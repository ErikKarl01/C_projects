#include <stdio.h>

int main() {
    int limiteSuperior;

    do {
        scanf("%d", &limiteSuperior);

        if (limiteSuperior >= 1 && limiteSuperior <= 19) {
            int espacos = limiteSuperior / 2;
            
            // Parte superior do losango
            for (int i = 1; i <= limiteSuperior; i += 2) {
                for (int j = 0; j < espacos; j++) printf(" ");
                for (int j = 0; j < i; j++) printf("*");
                printf("\n");
                espacos--;
            }

            espacos = 1;
            
            // Parte inferior do losango
            for (int i = limiteSuperior - 2; i > 0; i -= 2) {
                for (int j = 0; j < espacos; j++) printf(" ");
                for (int j = 0; j < i; j++) printf("*");
                printf("\n");
                espacos++;
            }
        } 
        else if (limiteSuperior != -1) {
            printf("Escolha um inteiro de 1 a 19\n");
        }
        
    } while (limiteSuperior != -1);

    return 0;
}
