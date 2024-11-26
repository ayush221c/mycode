t1=(1,2,3)
print(any(t1))

t2=(0,0,0,0)
print(any(t2))


t1=(9,65,7,5,1,6)
print(sorted(t1))


t1=('sri','arun','ayush','debbu')
print(sorted(t2))

[2,6,5,4,9,5]
['ayush','debbu','arun']


#sum()
#return the sum off elemets in the tuple
t1=(65,89,74,58,59)
print(sum(t1))

'''use case of tuple :
tuple can be used to return multiple values from a funtion 
tuples are more light weight and faster then lists 
it works as a single container it stuff multiple things we can use them as a key in dectionary


list 
a lsit is a heterogeneous collection of elements list is ordered sequence 
list is ordered sequence 
list is mutable un nature 
list can have any number of item s and can be of different 



sets 
a set is a hetrogeneous collection of element 
set is unordered sequence 
set is mutable in nature 
set stores unique vlaues it does not allow duplicate calues set can hace any number of items and can of different 
'''
s1={5,66,8,7,9,5}
print(s1)

s1=set()
print(s1)
t1=(65,23,5,4,5,5)
s2=set(t1)
print(s2)

''' set don't support indexing or slicing so the elemts of '''
''' we can not use + operatro to combine two sets '''
''' we can not repeat the elements in set for a given number 
we can test wheather an item exits in a set or not '''

''' WITH SET WE CAN PERFORM MATHEMATICAL SET OPERATIONS LIKE '''
'''SET SYYEMETRIC DIFFERENCE 
 set symmetric difference of two sets are the elements in both s1 and s2 except common elements in both 
 
'''

''' dictionary 
dictionary  is unordered collection 
dictionary is a collection of key values pairs 
dictionary is mutable 
the key and value can be any python data types 
the key must be  immutable like numbers , tuples or strings 
the key7 can not be duplicate 
dictionary keys are case sensetive 
the values in dictionary can be of any type 


'''
d1={99,'sir','manish','77:','dande'}
print(d1)
print(type(d1))
 
