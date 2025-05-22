#include <stdio.h>

/*Nesse caso, para interromper o loop prematuramente assim que a condição seja atingida é necessário que essa 
condição esteja espesificada junta na verificação*/

int main( void )
{ 
    int x;

    for ( x = 1; x <= 10 && x != 5; x++ ) {
        printf( "%d ", x );
    }

    printf( "\nSaiu do loop em x == %d\n", x ); 
    return 0;
}
