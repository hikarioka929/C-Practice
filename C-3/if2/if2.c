#include <stdio.h>

main()
{
    int a = 90;

    if(a > 80)
    {
        if(a == 100)
            printf("満点です！\n");
        else
            printf("もう少しで満点です。\n");
    }
    else
        printf("頑張りましょう。\n");
}