#include <stdio.h>
int main()
{
    FILE *fr;
    char name[] = "Jakaria Bhuiyan ";
    fr = fopen("test.txt", "a");
    fputs(name, fr);
    fputs("\n", fr); // for New line which is append

    fclose(fr);
    return 0;
}