#include<stdio.h>
int main()
{
  char input1,input2;
  scanf("%c %c",&input1,&input2);
  if(((input1 == 's') && (input2 == 'p')) || ((input1 == 'p') && (input2 == 's')))
    printf("s");
  else if(((input1 == 'r') && (input2 == 's')) || ((input1 == 's') && (input2 == 'r')))
    printf("r");
  else if(((input1 == 'p') && (input2 == 'r')) || ((input1 == 'r') && (input2 == 'p')))
    printf("p");
   else if(((input1 == 'r') && (input2 == 'p')) || ((input1 == 'p' && input2 == 'r')))
    printf("p");
  else 
    printf("d");
  return 0;
}
