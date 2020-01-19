n=int(input("enter a number: "))
for i in range(n):
  if i*i==n:
    print(i)
    break
  if i*i>n:
    j=i-1
    while j<=i:
      if j*j>n:
        print(j)
        break
      j=j+0.01
    break


'''
Output
enter a number 100
10

another no---
enter a number 95
9.749999999999984
'''
