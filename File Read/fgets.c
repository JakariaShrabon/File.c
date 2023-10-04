#include <stdio.h>
int main()
{
    FILE *fr;
    char ch[40];
    fr = fopen("test.txt", "r"); // using r for read
    while (!feof(fr))
    {
        fgets(ch, 15, fr);
        printf("%s", ch);
    }
    fclose(fr);
}
