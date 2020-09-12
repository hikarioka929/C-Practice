#include <stdio.h>

main()
{
    int a = 30;
    int x;

    x = ((a >= 0) && (a <= 100)) ? a : 0;
    printf("%d\n", x);
}