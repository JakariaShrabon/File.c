#include <stdio.h>
/*
for full string write
using fputc
*/
int main()
{
    FILE *fr;
    char name[] = "Jakaria Bhuiyan";
    fr = fopen("test.txt", "w");//using w for write
    fputs(name, fr);
    fclose(fr);
    return 0;
}