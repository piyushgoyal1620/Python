import collections
a={'a':'A','c':'C'}
b={'b':'B','c':'D'}
m=collections.ChainMap(a,b)
print('before:',m)
m['c']='E'
print("after:",m)
print('a:',a)
print(type(a))


'''

OUTPUT :-

before: ChainMap({'a': 'A', 'c': 'C'}, {'b': 'B', 'c': 'D'})
after: ChainMap({'a': 'A', 'c': 'E'}, {'b': 'B', 'c': 'D'})
a: {'a': 'A', 'c': 'E'}
<class 'dict'>



'''
