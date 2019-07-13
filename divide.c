#include<stdio.h>
int main()
{
  int N,K,i,limit,r;
  scanf("%d %d",&N,&K);
  if(N > K)
  {
    limit=N;
  }
  else
  {
    limit=K;
  }
  for(i=2;i<limit;i++)
  {
    if((N % i == 0) && (K % i == 0)
    {
      r=i;
    }
  }
  printf("%d",r);
  return 0;
}
