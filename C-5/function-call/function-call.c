#include <stdio.h>

int addnum(int a, int b)
{
    int x;

    x = a + b;
    return x;
}

main()
{
    int n;

    n = addnum(2, 3);
    printf("戻り値は%d\n", n);
}