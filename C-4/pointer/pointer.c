#include <stdio.h>

main()
{
    char x = 4, y;
    char *p = &x;
    y = *p;

    printf("変数xの値は%dです\n", y);
}