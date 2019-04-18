#include<stdio.h>
int main()
{
  char S[20],s1[20];
  int i,len,j;
  scanf("%s",&S);
  len=strlen(S);
  j=len-1;
  if(S <= 100000)
  {
    for(i=0;i<len;i++)
    {
      s1[i]=s[j];
      j--;
    }
    printf("%s",s1);
  }
}
