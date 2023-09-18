#include <stdio.h>
void main()
{

  /*
    sometimes we need to revome txt files
    so we usually use "remove " special function
    It's have to use only if else statements

  */
  if (remove("test.txt") == 0)
    printf("The file remove succesfully");
  else
    printf("The file still there");
}
