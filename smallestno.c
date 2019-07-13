#include<stdio.h>
int main()
{
  int l,r,i=2;
  scanf("%d %d",&l,&r);
  while(1)
  {
    if((l % i == 0) &&  (r % i == 0))
    {
      break;
    }
    i++;
  }
  printf("%d",i);
  return 0;
}
