#include <stdio.h>

main()
{
    int s = 65;

    printf("あなたの点数は%dです。\n", s);

    if(s < 70)
    {
        printf("平均点まであと%d点。\n", 70-s);
        printf("頑張りましょう！\n");
    }
    else
    {
        printf("よくできました！\n");
    }
    
}