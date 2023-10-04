#include <stdio.h>
/*
  For file writting print use only
  write Arrays,Someting print ,Variable value print

*/
void main()
{
  int n = 10;
  int arr[] = {1, 1, 1};
  char str[] = "Jakaria";
  FILE *fr;
  fr = fopen("test.txt", "w");//using w for write
  for (int i = 0; i < 3; i++)
  {
    fprintf(fr, "%d", arr[i]);
  }
  fprintf(fr, "\nThe string is :%s\n", str);
  fprintf(fr, "The integer is :%d", n);
  fprintf(fr, "\nShrabon ");
  fclose(fr);

  return 0;
}
