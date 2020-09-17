#include <stdio.h>

main()
{
    FILE *fp;
    char filename[] = "bintest.txt";
    int buf_w[10], buf_r[10];
    int i;

    //書き出し用のデータを生成
    for(i = 0; i < 10; i++)
    {
        buf_w[i] = (i + 1) * 10;
    }
    if(!(fp = fopen(filename, "wb")))
    {
        return 0;
    }
    if(fwrite(buf_w, sizeof(int), 10, fp) != 10)
    {
        fclose(fp);
        return 0;
    }
    fclose(fp);

    if(!(fp = fopen(filename, "rb")))
    {
        return 0;
    }
    if(fread(buf_r, sizeof(int), 10, fp) != 10)
    {
        fclose(fp);
        return 0;
    }
    fclose(fp);

    //読み込んだ内容を表示
    for(i = 0; i < 10; i++)
    {
        printf("%d", buf_r[i]);
    }
}