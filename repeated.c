#include<stdio.h>
#include<string.h>
int main()
{
  char str[50];
  char s;
  gets(str);
  int i,len,count = 0,temp=0,j;
  len=strlen(str);
  for(i=0;i<len;i++)
  {
    for(j=i+1;j<len;j++)
    {
      if(str[i] == str[j])
      {
        count++;
      }
    }
    if(count > temp)
    {
      temp =count;
      s=str[i];
    }
 }
 printf("%c",s);
 return 0;
 }
