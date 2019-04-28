str=input()
index=0
str1=""
for index in str:
    if index == 'a' or index == 'e' or index == 'i' or index == 'o' or index == 'u' or  index == 'A' or index == 'E' or index == 'I' or index == 'O' or index == 'U' :
        print(index,end='')    
    else:
      str1=str1+index
print(str1)
