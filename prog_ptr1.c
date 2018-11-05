
#include <stdio.h>

void main()
{
  char name[]="Mark";
  char *s="John";
  
  while(*s!='\0')
    {
      printf("\n%c",*s);
      s++;
    }
  s=name;
  printf("\n%s",s);
}
