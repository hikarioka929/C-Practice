#include <stdio.h>

main()
{
    // 宣言
    char c = '\0';
    char prevletter;
    int wordnum;
    int word_in;

    while(1)
    {
        //初期化
        wordnum = 0;
        word_in = 0;
        prevletter = '\0';

        printf("文字列を入力してください\n");

        while(1)
        {
            c = getchar();

            //Enterキーの時
            if(c == '\n')
            {
                if(word_in)
                {
                    wordnum++;
                }
                break;
            }

            //文字の判定　区切り文字なら単語数++
            prevletter = c;
            if((c == ' ') || (c == '.'))
            {
                if(word_in)
                {
                    wordnum++;
                    word_in = 0;
                }
            }
            else
            {
                word_in = 1;
            }
        }
        if(prevletter == '\0')
            {
                break;
            }
        printf("ワード数: %d\n", wordnum);
    }
}