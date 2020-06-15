  
import collections # import collection here
c=collections.Counter()
print('intial:',c)
c.update('abcdaab')
print('sequence:',c)
c.update({'a':1,'d':5,'f':10})
print("Dict:",c)

'''
OUTPUT : - 

intial: Counter()
sequence: Counter({'a': 3, 'b': 2, 'c': 1, 'd': 1})
Dict: Counter({'f': 10, 'd': 6, 'a': 4, 'b': 2, 'c': 1})


'''
