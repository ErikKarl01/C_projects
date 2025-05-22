/*
Apresente o se￾guinte padrão de asteriscos alternados com oito instru-
ções printf, e depois apresente o mesmo padrão com 
o mínimo de instruções printf possível.
*/

#include<stdio.h>

int main (void) {

    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");

    printf("\n");

    printf("* * * * * * * *\n"
            " * * * * * * * *\n"
            "* * * * * * * *\n"
            " * * * * * * * *\n"
            "* * * * * * * *\n"
            " * * * * * * * *\n"
            "* * * * * * * *\n"
            " * * * * * * * *\n");

    return 0;

}