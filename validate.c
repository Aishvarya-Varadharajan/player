#include<stdio.h>
#include<ctype.h>
int main()
{
  char input[20],i,count=0;
  scanf("%s",&input);
  for(i=0;input[i] != '\0';i++)
  {
  
  if(isdigit(input[i]) == 0)
  {
   count=1;
  }
  }
  if(count == 1)
  {
  	printf("No");
  }
  else
  {
    printf("yes");
  }
  return 0;
}
