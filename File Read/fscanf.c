#include <stdio.h>
int main()
{
    FILE *fr;
    char ch[40];

    fr = fopen("test.txt", "r"); // using r for read
    fscanf(fr, "%s", &ch);
    printf("%s", ch);//it's only print before file string 
    //for print with space string 'fscnaf(fr,"%s %s",&ch);'
    fclose(fr);
    return 0;
}