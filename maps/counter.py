import collections
print(collections.Counter(['a','b','c','a','b','b']))
print(collections.Counter({'a':2,'b':3,'c':1}))
print(collections.Counter(a=2,b=3,c=1))
print(collections.Counter({1,2,3,3,3,2,1,2,3}))


'''

OUTPUT : -

Counter({'b': 3, 'a': 2, 'c': 1})
Counter({'b': 3, 'a': 2, 'c': 1})
Counter({'b': 3, 'a': 2, 'c': 1})
Counter({1: 1, 2: 1, 3: 1})



'''
