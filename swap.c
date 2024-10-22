#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void)
{
    int x = 3;
    int y = 5;

    printf("x is equals to %i\n", x);
    printf("y is equals to %i\n", y);

    //swapping values using a temp variavel
    swap(&x, &y);

    printf("x is now equals to %i\n", x);
    printf("y is now equals to %i\n", y);
}