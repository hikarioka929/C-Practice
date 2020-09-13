#include <stdio.h>

main()
{
    char a;

    do
    {
        a = getchar();
        printf("%c", a);
    }
    while (a != 'e');
}