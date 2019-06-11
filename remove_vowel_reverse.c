#include<stdio.h>
#include<string.h>
int main()
{
  char str1[20],str2[20]={0},str3[20]={0};
  int length,i,j=0;
  scanf("%s",&str1);
  length=strlen(str1);
  for(i=0;i<length;i++)
  {
    if((str1[i] != 'a') && (str1[i] != 'e') && (str1[i] != 'i') && (str1[i] != 'o') && (str1[i] != 'u'))
    {
      str2[j]=str1[i];
      j++;
    }
   }
   length=strlen(str2);
   j=length;
   for(i=0;i<=length;i++)
   {
     str3[i]=str2[j];
     printf("%c",str3[i]);
     j--;
    }
    printf("%s",str3);
    return 0;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
