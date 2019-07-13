#include<stdio.h>
int main()
{
  int num,i,j,k,limit,flag=0;
  scanf("%d",&num);
  limit=num;
  for(i=2;i<limit;i++)
  {
  for(j=1;j<limit;j++)
  {
    k = i * j;
   if(num == k)
   {
      printf("%d ",i);
      limit=j;
      flag=1;
   }
  }
  }
  if(flag == 0)
  {
  	printf("%d",num);
  }

   return 0;
}
