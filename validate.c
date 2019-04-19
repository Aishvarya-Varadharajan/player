#include<stdio.h>
int main()
{
  char input[20];
  scanf("%s",&input);
  if(isdigit(input))
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
