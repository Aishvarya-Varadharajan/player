#include<stdio.h>
#include<string.h>
int main()
{
  char str[100],str1[100]={0};
  inti,len;
  scanf("%s",&str);
  len=strlen(str);
  if((len >= 1) && (len <= 1000000))
  for(i=0;i<len;i++)
  {
    str[i]=str[i]+3;
  }
  printf("%s",str);
  return 0;
}
