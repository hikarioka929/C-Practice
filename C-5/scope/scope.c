#include <stdio.h>

int z;
int y;

void myfanc(int a)
{
    int x;
    int z;

    x = a;
    y = a;
    z = a;
}

main()
{
    int x;

    x = 10;
    y = 10;
    z = 10;

    printf("x, y, zの値は%d,%d,%d\n", x, y, z);
    myfanc(5);
    printf("x, y, zの値は%d,%d,%d\n", x, y, z);
}