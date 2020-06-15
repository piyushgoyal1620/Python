import collections
dic1={'a':1,'b':2}
dic2={'b':3,'c':4}
dic3={'f':5}
chain=collections.ChainMap(dic1,dic2)
print("All the chainmap contents are:")
print(chain.maps)
chain1=chain.new_child(dic3)
print("display new chainmap:")
print(chain1.maps)
print(list(chain1.keys()))
print("value associated with b before reversing is:",end='')
print(chain1['b'])
chain1.maps=reversed(chain1.maps)
print("value associated with b after reversing is:",end='')
print(chain1['b'])
for i,j in chain.items():
  print(i,j)
  
  
  '''
  OUTPUT : -
  
  
  All the chainmap contents are:
[{'a': 1, 'b': 2}, {'b': 3, 'c': 4}]
display new chainmap:
[{'f': 5}, {'a': 1, 'b': 2}, {'b': 3, 'c': 4}]
['b', 'c', 'a', 'f']
value associated with b before reversing is:2
value associated with b after reversing is:3
b 2
c 4
a 1


'''
