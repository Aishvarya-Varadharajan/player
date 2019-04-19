#include<stdio.h>
int main()
{
  int digit,remainder,square,sum=0;
  scanf("%d",&digit);
  if(digit <= 10000000000000)
  {
    while(digit)
    {
      remainder=digit%10;
      square=remainder * remainder;
      sum=sum+square;
      digit=digit/10;
    }
    printf("%d",sum);
  }
  return 0;
}
