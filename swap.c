#include <stdio.h>

int main(void)
{
    int x = 3;
    int y = 5;

    printf("x is equals to %i\n", x);
    printf("y is equals to %i\n", y);

    //swapping values using a temp variavel
    int tmp = x;
    x = y;
    y = tmp;

    printf("x is now equals to %i\n", x);
    printf("y is now equals to %i\n", y);
}