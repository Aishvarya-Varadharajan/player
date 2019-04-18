#include<stdio.h>
int main()
{
  int fact=1,N;
  scanf("%d",&N);
  if(N <= 20)
  {
    for(i=1;i<N;i++)
    {
      fact=fact*i;
    }
    printf("%d",fact);
  }
}
