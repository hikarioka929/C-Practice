#include <stdio.h>
#include <string.h>

main()
{
    char s[] = "I love cat.";
    char c = 'd';
    char *p = NULL;

    printf("文字列『%s』の中に文字『%c』", s, c);

    p = strchr(s, c);

    if(!p)
    {
        printf("はありません。\n");
    }
    else
    {
        printf("を発見しました。\n");
    }
}