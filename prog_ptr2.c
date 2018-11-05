#include <stdio.h>

void main()
{
  int a,*p0;
  char s,*p1;
  void *p2;
  
  a=1025;
  p0=&a;

  printf("The size of int %d",sizeof(int));
  printf("\n Address = %d , Value= %d",p0,*p0);
  printf("\n Address = %d , Value= %d",(p0+1),*(p0+1));
  
  p1=(char*)p0;

  printf("\n The size of char %d",sizeof(char));
  printf("\n Address = %d , Value = %d",(p1+1),*(p1+1));

  p2=p0;
  printf("\n Address = %d",p2);
}
