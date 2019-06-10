#include<stdio.h>
#include<string.h>
int main()
{
  char str1[20],str2[20]={0};
  int i,j,len;
  scanf("%s",&str1);
  len=strlen(str1);
  for(i=0;i<len;i++)
  {
    str2[i]=str1[i+1];
    str2[i+1]=str1[i];
    i++;
  }
  printf("%s",str2);
  return 0;
}
