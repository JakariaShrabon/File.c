#include <stdio.h>
void main()
{
  int n = 10;
  int arr[] = {1, 1, 1};
  char str[] = "Jakaria";
  FILE *fr;
  fr = fopen("test.txt", "w");
  for (int i = 0; i < 3; i++)
  {
    fprintf(fr, "%d", arr[i]);
  }
  fprintf(fr, "\nThe string is :%s\n", str);
  fprintf(fr, "The integer is :%d", n);
  fprintf(fr, "\nShrabon ");
  fclose(fr);
}
/*
  For file writting print use only
  write Arrays,Someting print ,Variable value print

*/