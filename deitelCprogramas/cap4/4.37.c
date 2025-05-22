#include <stdio.h>

/*A lógica de exclusão do continue consiste em uma verificação que impede uma dada ação de ocorrer*/

int main(void) { 
    int x;

    for (x = 1; x <= 10; x++) {
        if (x != 5) 
            printf("%d ", x);
    }

    printf("\nUsou continue para pular a exibição do valor 5\n"); 
    return 0;
}
