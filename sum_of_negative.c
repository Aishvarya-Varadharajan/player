#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  int arr[N],i,sum=0;
  if(N <= 100000)
  {
    for(i=0;i<N;i++)
    {
      scanf("%d",&arr[i]);
    }
    
    for(i=0;i<N;i++)
    {
      if(arr[i] < 0)
      {
        sum=sum+arr[i];
      }
    }
    printf("%d",sum);
  }
  return 0;
}
