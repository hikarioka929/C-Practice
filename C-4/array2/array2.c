#include <stdio.h>

main()
{
    int x, y;
    int a[2][3] = {
        {10, 20,30},
        {40, 50, 60}
    };

    for(y = 0; y < 2; y++)
    {
        for(x = 0; x < 3; x++)
        {
            printf("a[%d][%d] = %d ", y, x, a[y][x]);
        }
        printf("\n");
    }
}