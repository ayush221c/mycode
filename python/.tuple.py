# # # tuple is a hectrogeneous collection of elements 
# # # and they are immutable in nature 
# # a=(10,29.55,True)
# # print(type(a))
# # print(a)
 
# #nesteed tuple 
# t1=(10,440,False)
# t2=("a","z",10.22)
# t3=("abc",True,123)
# t4=(t1,t2,t3)
# print(t4[1])
# print(t4[1][0])
# #we can not delete or remove element from tuple 
# #we can delete the whole tuple using del keyword 
# #we can access a range of elements from a tuple by using a slicing  

t1=(10,20,30,40,True,False,"a","ab","xyz")
print(t1[2:5])
print(t1[:])
print(t1[::2])
print(t1[2:6:5])
print(t1[-1:-5])
#we can use + operator to combine two tuples this is called tuple concadination
# we can repeat the elements in the tuple for a given number of times using * star operator 
#we can compare the elements of tuple using comparison operator     
#WE CAN ACCESS THE VALUES IN THE TUPLE USING 