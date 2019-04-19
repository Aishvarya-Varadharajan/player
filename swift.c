#include<stdio.h>
int main()
{
  int N,K;
  scanf("%d %d",&N,&K);
  int arr[N],i,a[N];
  for(i=0;i<N;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<N;i++)
  {
    a[i]=(arr[i] << 2) | (arr[i] >> ( 8-2));
  }
   for(i=0;i<N;i++)
  {
    printf("%d",a[i]);
  }
  return 0;
  }
