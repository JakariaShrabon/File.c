#include <stdio.h>
#include <string.h>
/*
for only  string write at once
using fputc
*/
int main()
{
    char name[] = "Jakaria Bhuiyan";
    int len = strlen(name);
    int i;
    FILE *fr;
    fr = fopen("test.txt", "w"); // using w for write
    for (i = 0; i < len; i++)
        putc(name[i], fr);

    fclose(fr);
    printf("%d", len);

    return 0;
}