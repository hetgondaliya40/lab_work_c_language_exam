/*
1D array using pointer
*/
#include <stdio.h>

int main() {

    int a, b;
    int swap;
    int *b1,*b2;

    printf("Enter the value of A and B: ");
    scanf("%d %d", &a, &b);

    printf("\n swapping A = %d and b = %d",a,b);


    b1 = &a;
    b2 = &b;


    swap = *b1;
    *b1 = *b2;
    *b2 = swap;

    printf("\n swapping A = %d and b = %d",a,b);

}
