#include<stdio.h>
#include<string.h>
int main()
{
  int N,len,min=0;
  scanf("%d",&N);
  char arr[N];
  int len[N]
  for(i=0;i<N;i++)
  {
    scanf("%s",&arr[i]);
  }
  for(i=0;i<N;i++)
  {
    len[i]=strlen(arr[i]);
  }
  for(i=0;i<N;i++)
  {
    for(j=i+1;j<N;j++)
    {
      if(len[i] > len[j])
      {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
      }
    }
  }
  for(i=0;i<N;i++)
  {
    printf("%s",arr[i]);
  }
  return 0;
  }
