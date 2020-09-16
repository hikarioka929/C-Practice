#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char usage[] = "usage: ./a.out <-d> filename\n";
    int ret = 0;
    char newfilename[256] = "";

    // パラメータが無かった場合
    if(argc <= 1)
    {
        printf(usage);
        return 1;
    }

    // -dの指定があった場合
    else if(strcmp(argv[1], "-d") == 0)
    {
        if(argc <= 2)
        {
            printf(usage);
            return 2;
        }

        ret = remove(argv[2]);
        if(ret == 0)
        {
            printf("ファイルを削除しました。\n");
        }
        else
        {
            printf("ファイルを削除できませんでした。\n");
        }
    }

    //-dの指定が無かった場合
    else
    {
        sprintf(newfilename, "%s.bak", argv[1]);

        ret = rename(argv[1], newfilename);
        if(ret == 0)
        {
            printf("プリント名の最後に、.bakを付加しました。\n");
        }
        else
        { 
            printf("ファイル名の変更ができませんでした。\n");
        }
    }
    return 0;
}