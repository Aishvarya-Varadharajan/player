str=input()
index = 0
str1=""
for index in str:
    if index.islower():
        str1=str1+index.upper()
    else:
        str1=str1+index.lower()
print(str1)
