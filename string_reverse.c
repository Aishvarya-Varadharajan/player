#include<stdio.h>
#include<string.h>
int main()
{
  char S[20],s1[20]={0};
  int i,len,j;
  scanf("%s",&S);
  len=strlen(S);
  j=len-1;
  for(i=0;i<len;i++)
  {
    s1[i]=S[j];
    j--;
  }
  printf("%s",s1);
 
}
