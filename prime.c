#include<stdio.h>
int main()
{
  int l,r,i,count=0,num,j;
  scanf("%d %d",&l,&r);
  for(i=l;i<r;i++)
  {
    num = 0;
    for(j=2;j<i;j++)
    {
      if(i % j == 0)
      {
        num++;
      }
    }
    if(num == 0)
    {
      count++;
    }
  }
  printf("%d",count);
  return 0;
}
