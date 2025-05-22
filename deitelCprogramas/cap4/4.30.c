#include <stdio.h>

int main(void) { 
    int nota;
    int aCont = 0;
    int bCont = 0;
    int cCont = 0;
    int dCont = 0;
    int fCont = 0;

    printf("Digite as notas em letra.\n"); 
    printf("Digite o caractere EOF para encerrar a entrada.\n"); 

    while ((nota = getchar()) != EOF) {
        if (nota == '\n' || nota == ' ' || nota == '\t')
        {
            continue;
        }

        if (nota == 'A' || nota == 'a' || nota == 'B' || nota == 'b' || nota == 'C' || nota == 'c' || nota == 'D'
             || nota == 'd' || nota == 'F' || nota == 'f')
        {
            if (nota == 'A' || nota == 'a')
            {
                aCont++;
            }
            if (nota == 'B' || nota == 'b')
            {
                bCont++;
            }
            if (nota == 'C' || nota == 'c')
            {
                cCont++;
            }
            if (nota == 'D' || nota == 'd')
            {
                dCont++;
            }
            if (nota == 'F' || nota == 'f')
            {
                fCont++;
            }
        }
        else
        {
            printf("Entrada inválida");
            while (getchar() != '\n');
        }
        while (getchar() != '\n');
    }

    printf("\nTotais para cada nota são:\n"); 
    printf("A: %d\n", aCont); 
    printf("B: %d\n", bCont); 
    printf("C: %d\n", cCont);
    printf("D: %d\n", dCont); 
    printf("F: %d\n", fCont);

    return 0;
}
