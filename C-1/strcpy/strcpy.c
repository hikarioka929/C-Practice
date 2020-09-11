#include <stdio.h>
#include <string.h>

main()
{
    char s[10] = "Hello";
    printf("%s\n", s);

    strcpy(s, "Good bye");
    printf("%s\n", s);
}