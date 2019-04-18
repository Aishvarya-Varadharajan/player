#include<stdio.h>
int main()
{
  int fact,N,i;
  scanf("%d",&N);
  fact=N;
  if(N <= 20)
  {
    for(i=1;i<N;i++)
    {
      fact=fact*i;
    }
    printf("%d",fact);
  }
}
