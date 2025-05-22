#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    srand(time(NULL));

    int num_par = 2*(rand()%5 + 1);
    printf("%d\n", num_par);

    int num_impar = 2*(rand()%5 + 1) + 1;
    printf("%d\n", num_impar);

    int num = 4*(rand()%5) + 6;
    printf("%d\n", num);

    return 0;
}