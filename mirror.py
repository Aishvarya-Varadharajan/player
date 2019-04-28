#include<stdio.h>
int main()
{
  int N,count=0,j;
  scanf("%d",&N);
  j=N;
  if(N <= 100000)
  {
    int arr1[N],arr2[N];
    for(i=0;i<N;i++)
    {
      scanf("%d",&arr1[i]);
    }
    for(i=0;i<N;i++)
    {
      scanf("%d",&arr2[i]);
    }
    for(i=0;i<N;i++)
    {
        j--;
        if(arr1[i] != arr2[j])
        {
          count = 1;
        }
    }
    if(count == 0)
    {
      printf("yes");
    }
    else
    {
      printf("No");
    }
     
    }
    return 0;
}
