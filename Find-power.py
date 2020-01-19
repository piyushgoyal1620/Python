def power(x, y):
    if y == 0:
        return 1
    else:
        return x * power(x, y - 1)
a=int(input("please enter Base number "))
b=int(input(" please enter number of times digits "))
print(power(a,b))



'''
output ---
please enter Base number 4
please enter number of times digits 2
16
'''
