#include<stdio.h>
int main()
{
  int l,r,i,j,count =0,flag=0;
  scanf("%d %d",&l,&r);
  for(i=l;i<=r;i++)
  {
    for(j=2;j<=r;j++)
    {
      if(i % j)
      {
        flag=1;
      }
    }
    if(flag == 1)
    {
      count++;
    }
  }
  printf("%d",count);
  return 0;
}
