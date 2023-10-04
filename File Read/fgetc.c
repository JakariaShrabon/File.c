#include <stdio.h>
int main()
{
    FILE *fr;
    char ch;

    fr = fopen("test.txt", "r");//using r for read
    while (!feof(fr))//
    {
        ch = fgetc(fr);//for store a variable from file datas
        printf("%c", ch);//print the file data in console 
    }
    fclose(fr);
    return 0;
}