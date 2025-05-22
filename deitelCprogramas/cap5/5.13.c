#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    srand(time(NULL));

    int n1 = rand()%2 + 1;
    printf("%d\n", n1);

    int n2 = rand()%100 + 1;
    printf("%d\n", n2);

    int n3 = rand()%10;
    printf("%d\n", n3);

    int n4 = rand()%113 + 1000;
    printf("%d\n", n4);

    int n5 = rand()%3 - 1;
    printf("%d\n", n5);

    int n6 = rand()%14 - 3;
    printf("%d\n", n6);

    return 0;
}