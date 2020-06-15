import collections
c1=collections.Counter(['a','b','c','a','b'])
c2=collections.Counter('alphabet')
print('c1:',c1)
print('c2:',c2)
print('combined counts:')
print(c1+c2)
print('subtraction:')
print(c1-c2)
print('intersection')
print(c1&c2)
print('union')
print(c1|c2)


'''
OUTPUT : - 

c1: Counter({'a': 2, 'b': 2, 'c': 1})
c2: Counter({'a': 2, 'l': 1, 'p': 1, 'h': 1, 'b': 1, 'e': 1, 't': 1})
combined counts:
Counter({'a': 4, 'b': 3, 'c': 1, 'l': 1, 'p': 1, 'h': 1, 'e': 1, 't': 1})
subtraction:
Counter({'b': 1, 'c': 1})
intersection
Counter({'a': 2, 'b': 1})
union
Counter({'a': 2, 'b': 2, 'c': 1, 'l': 1, 'p': 1, 'h': 1, 'e': 1, 't': 1})

'''
