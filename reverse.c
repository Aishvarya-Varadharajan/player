#include<stdio.h>
int main()
{
  int remainder,input,sum=0;
  scanf("%d",&input);
  while(input)
  {
    remainder=input%10;
    sum=sum*10+remainder;
    input=input/10;
  }
  printf("%d",sum);
  return 0;
}
