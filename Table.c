#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,n,p;
  printf("enter n");
  scanf("%d",&n);
  for (i=1;i<=10;i++)
  {
    
    int p= n*i;
    printf("%d\n",p)  ;
    
  }
  return 0;
}
