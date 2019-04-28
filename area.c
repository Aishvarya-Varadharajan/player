#include<stdio.h>
int main()
{
  int height,base,area;
  scanf("%d %d",&height,&base);
  if((height <= 1000000) && (base <= 1000000))
  {
    area=(height*base)/2;
    printf("%d",area);
  }
  return 0;
}
