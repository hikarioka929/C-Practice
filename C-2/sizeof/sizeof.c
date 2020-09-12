#include <stdio.h>

main()
{
    char c = 1;
    char s[10] = "Hello";

    printf("long型 = %dバイト\n", sizeof(long));
    printf("char型変数 = %dバイト\n", sizeof(c));
    printf("文字列変数 = %dバイト\n", sizeof(s));
}