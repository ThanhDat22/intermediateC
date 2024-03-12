// swap.c
#include <stdio.h>
#include <stdlib.h>
void swap (int* first, int* second) {
    int temp;
    temp = * first;
    * first = * second;
    * second = temp;
}

int main (int argc ,char * * argv) {
    int a = 25;
    int b = -89;


    printf("Before swap: a = %d, b = %d", a, b );

    swap(&a, &b);
    printf("\nAfter swap: a = %d, b = %d", a, b );

    return EXIT_SUCCESS;
}