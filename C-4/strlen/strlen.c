#include <stdio.h>
#include <string.h>

main()
{
    char s1[] = "cat";
    char s2[] = "dog";
    char s[20];

    sprintf(s, "I love %s and %s.", s1, s2);
    printf("『%s』の文字数は%d\n", s, strlen(s));
}