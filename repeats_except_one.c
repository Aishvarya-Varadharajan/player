#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  if(N <= 100000)
  {
    int arr[N];
    int i,len,count = 0,j;
    for(i=0;i<N;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
      count =0;
      for(j=0;j<N;j++)
      {
        if(i != j)
        {
          if(arr[i] == arr[j])
          {
            count = 1;
          }
        }
     }
      if(count == 0)
      {
       printf("%d",arr[i]);
      }
   }
 }
 return 0;
 }
