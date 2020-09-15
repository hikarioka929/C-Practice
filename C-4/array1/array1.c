#include <stdio.h>

main()
{
    int a[] = {1, 2, 3, 4};
    int i;

    for(i = 3; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}