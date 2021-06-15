#added new commit for hooks
#added new function palindrome
def palindrom(x):
    pn=0
    while(x):
        r=x%10
        x=x//10
        pn=pn*10+r
    return pn
def checkpalin(y):
    x=palindrom(y)
    if(y==x):
        return 1
    else:
        return 0
a=int(input())
y=palindrom(a)
z=a+y
j=checkpalin(z)
if(j==1):
   print(z)
else:
  while True:
     y=palindrom(z)
     z=y+z
     j=checkpalin(z)
     if(j==1):
         print(z)
         break
    
