#include <stdio.h>
/*
    sometimes we need to revome txt files
    so we usually use "remove " special function
    It's have to use only if else statements

  */
int main()
{

  if (remove("test.txt") == 0)
    printf("The file remove succesfully");
  else
    printf("The file still there");

  return 0;
}
