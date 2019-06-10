#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20];
int i ,count=0,len1,len2;
scanf("%s %s",str1,str2);
len1=strlen(str1);
len2=strlen(str2);
if(len1 == len2)
{
  for(i=0;i<len1;i++)
  {
    if(str1[i] != str2[i])
    {
      count++;
    }
  }
  if(count == 1)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
}
else
{
  printf("No");
}
return 0;
}
