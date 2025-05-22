#include <stdio.h>

int main(void) {
    int notaLetra;
    float somaDasNotas = 0;
    float notaFloat;
    float notaMedia;
    int aCont = 0;
    int bCont = 0;
    int cCont = 0;
    int dCont = 0;
    int fCont = 0;
    char mediaChar;

    printf("Digite as notas em letra depois o valor real da nota.\n");
    printf("Digite o caractere EOF para encerrar a entrada.\n");

    while ((notaLetra = getchar()) != EOF) {
        if (notaLetra == '\n' || notaLetra == '\t' || notaLetra == ' ')
        {
            continue;
        }
        
        switch (notaLetra) {
            case 'A': case 'a':
                ++aCont;
                break;
            case 'B': case 'b':
                ++bCont;
                break;
            case 'C': case 'c':
                ++cCont;
                break;
            case 'D': case 'd':
                ++dCont;
                break;
            case 'F': case 'f':
                ++fCont;
                break;
            case '\n': case '\t': case ' ':
                break;
            default:
                printf("Letra de nota incorreta.\n");
                printf("Digite nova nota.\n");
                while (getchar!='\n');
                break;
        }
        while (getchar!='\n');
        scanf("%f", &notaFloat);
        somaDasNotas+=notaFloat;
    }

    if (aCont+bCont+cCont+dCont+fCont)
    {
        notaMedia = somaDasNotas/(aCont+bCont+cCont+dCont+fCont);
    }
    else
    {
        return 0;
    }

    if (9.0<=notaMedia && notaMedia<=10)
    {
        mediaChar = 'A';
    }
    else if (8.0<=notaMedia && notaMedia<=8.9)
    {
        mediaChar = 'B';
    }
    else if (7.0<=notaMedia && notaMedia<=7.9)
    {
        mediaChar = 'C';
    }
    else if (6.0<=notaMedia && notaMedia<=6.9)
    {
        mediaChar = 'D';
    }
    else
    {
        mediaChar = 'F';
    }
    

    printf("\nTotais para cada nota são:\n");
    printf("A: %d\n", aCont);
    printf("B: %d\n", bCont);
    printf("C: %d\n", cCont);
    printf("D: %d\n", dCont);
    printf("F: %d\n", fCont);
    printf("Nota media %c\n", mediaChar);

    return 0;
}
