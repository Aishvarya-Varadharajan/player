#include<stdio.h>
int main()
{
  int length,s[20],i,str[20];
  scanf("%s",&s);
  for(i=length;i>0;i++)
  {
    if((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u'))
    {
      continue;
    }
    else 
    {
      str[i]=s[i];
    }
  }
 printf("%s",str);
 return 0;
  
}
