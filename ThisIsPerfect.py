'''
write a program to determine wheather a number N is equal to the sum of its proper divisors (excluding the number itself ).

input format :
- 1st line: t (number of test cases )
- n
output: 
print "yes" if N is equal to the sum of its proper divisors else print "no".

'''

# CODE 
t=int(input())
a=[]
for i in range(1,t+1):
    x=int(input())
    for j in range(1,(int(x/2)+2)):
        if(x%j==0):
            a.append(j)
        else:
            continue
    b=sum(a)
    if(x==b):
        print("YES")
    else:
        print("NO")
    a.clear()
    
    
    '''
  INPUT:--
  3
  28
  5
  6
  
  
  
  OUTPUT:--
  YES
  NO
  YES
    
  
