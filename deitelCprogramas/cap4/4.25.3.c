#include <stdio.h>


int main() {
    int i, j, resto;

    for (i = 1; i <= 256; i++) {
        printf("%d em hexadecimal: ", i);
        long int numHex = 0, posicao = 1;
        int interacoes = 0;
        
        
        for (j = i; j >= 1; j /= 16) {
            resto = j % 16;
            numHex += resto * posicao;
            posicao *= 100;  
            interacoes++;
        }
        
        
        if (interacoes == 1) {
            if (10<=numHex && numHex<16)
            {
                printf("%c", 'A' + (resto - 10));
            }
            else
            {
                printf("%ld", numHex);
            }
             
        }
        else if (interacoes == 2) {
            int posicao1 = numHex % 100;    
            numHex = numHex / 100;          
            int posicao2 = numHex; 
            
            if (10<=posicao2 && posicao2<16)
            {
                printf("%c", 'A' + (posicao2 - 10)); 
            }
            else
            {
                printf("%d", posicao2);
            }
            
            if (10<=posicao1 && posicao1<16)
            {
                printf("%c", 'A' + (posicao1 - 10)); 
            }
            else
            {
                printf("%d", posicao1);
            }
              
        }
        else if (interacoes == 3) {
            int posicao1 = numHex % 100;
            numHex = numHex / 100;
            int posicao2 = numHex % 100;
            numHex = numHex / 100;
            int posicao3 = numHex;

            if (10<=posicao3 && posicao3<16)
            {
                printf("%c", 'A' + (posicao3 - 10)); 
            }
            else
            {
                printf("%d", posicao3);
            }
            if (10<=posicao2 && posicao2<16)
            {
                printf("%c", 'A' + (posicao2 - 10)); 
            }
            else
            {
                printf("%d", posicao2);
            }
            if (10<=posicao1 && posicao1<16)
            {
                printf("%c", 'A' + (posicao1 - 10));
            }
            else
            {
                printf("%d", posicao1);
            } 
        }
        

        printf("\n");
    }

    return 0;
}
