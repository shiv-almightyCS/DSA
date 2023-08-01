# import math
# n1=int(input("Enter n1: "))
# n2=int(input("Enter n2: "))
# l1=list(range(n1,n2))
# def prime(n):
#     f=0
#     for i in range(2,int(math.sqrt(n))+1):
#         if n%i==0:
#             f=1
#             break
#     if f==0:
#         return True
#     else:
#         return False
# print(list(filter(prime,range(n1,n2+1))))
# print(list(filter(lambda x:x%2==0,range(-10,10))))

from test import *

# def armstrong(n):
#     s=str(n)
#     num=n
#     ans=0
#     while(n>0):
#         rem=n%10
#         n=n//10
#         ans=pow(rem,len(s))+ans
#     if num==ans:
#         return ans
# l1=list(map(armstrong,range(n1,n2+1)))
# l2=[]
# for i in l1:
#     if i!=None:
#         l2.append(i)
# print(l2)

# s1="the quick brown fox jumps over the lazy dog"
# l1=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
# for i in s1:
#     if i in l1:
#         l1.remove(i)
# if len(l1)==0:
#     print("pangram")
# import functools
# print(list(filter(lambda x:x+10,range(0,functools.reduce(lambda x,y:x*y,range(0,15))))))

# def increament_item(L,increment):
#     i=0
#     while i<len(L):
#         L[i]=L[i]+increment
#         i=i+1
# values=[1,2,3]
# print(increament_item(values,2))
# print(values)

# values=[[3,4,5,1],[33,6,1,2]]
# v=values[0][0]
# for row in range(0,len(values)):
#     for column in range(0,len(values[row])):
#         if v<values[row][column]:
#             v=values[row][column]

# print(v)

# n=int(input("Enter n: "))
# sum=0
# num=n
# for i in range(1,int(n/2)+1):
#     if n%i==0:
#         sum+=i
# print(sum)
# if sum==n:
#     print("perfect")
# nums=[13, 1, 2, 3, 4, 5, 13, 6, 7]
# m1=0
# for i in nums:
#     if i>m1:
#         m2=m1
#         m1=i
# print(m2)
# nums=[13,2,2,1,13]
# sum = 0
# skip = False
# for i in range(len(nums)):
#     if nums[i] == 13:
#         skip = True
#         continue
#     elif skip:
#         skip = False
#         continue
#     else:
#         sum += nums[i]

# print(sum)
# s1=set(nums)
# print(s1)

# l1=[1,2,3]
# l2=l1
# l2.append(5)
# print(l1,l2)
# l1[:((len(l1)-1)+2*(len(l1)+2))]=[[5]*3]
# print(l1)

# class Ldrp:
    
#     cnt=0

#     def __init__(self,x=0,y=0):
#         self.x=x
#         self.y=y
#         Ldrp.cnt+=1
    
#     def get_values(self):
#         return self.x,self.y
#     def print_values(self):
#         print("x = ",self.x)
#         print("y = ",self.y)

# obj1=Ldrp(1,2)
# obj1.print_values()

# def compare(l1,l2):
#     for i in l1:
#         if i in l2:
#             return True
#     return False

# l1=[1,2,3,4,5,5,5,5,5,5,6,2,3,6]
# l2=[]
# count=len(l1)
# for i in l1:
#     if count>l1.count(i):
#         count=l1.count(i)
# print(count)
# for i in l1:
#     if count==l1.count(i):
#         l2.append(i)
# print(l2)
# l2=[5,6,7,8,0]
# l2=l2[-1:]+l2[:-1]
# p=l2[-1:]
# q=l2[:-1]
# print(p,q)
# print(compare(l1,l2))
# temp="google"
# s = list(temp)
# for i in range(0,len(s)-1):
#     for j in range(i+1,len(s)):
#         if s[i]==s[j]:
#             s[j] = '*'
# temp = ""
# temp = temp.join(s)
# print(temp)

# file = open('turing.txt','r')
# # line=len(file.readlines())
# # print(line)

# content=file.read()
# words=content.split()
# unique_words=set(words)

# print(unique_words)

# print(list(filter(lambda x:(x%2)==0,range(1,10))))
# t1=('xyz')
# # t2=t1+(746,)
# print(type(t1))
# t1=('xyz',)
# print(type(t1))
# Facotrial
# n=int(input('Enter n : '))
# def fact(n):
#     if n==0:
#         return 1
#     else:
#         return n*fact(n-1)
# print(fact(n))
# import numpy as np

# p=[['a'],['b'],['cd']]
# l1=np.array(p)
# print(l1.reshape(1,3))
# for p[-1] in p:
#     print(p[-1])
# q=['x','y','z']
# x2,y2=zip(*zip(p,q))
# print(x2,y2)

# l1=[[0]*4 for i in range(2)]
# print(l1)

# def flatten_list(nested_list):
#     """Flatten a nested list"""
#     flattened_list = []
#     for item in nested_list:
#         if isinstance(item, list):
#             flattened_list.extend(flatten_list(item))
#         else:
#             flattened_list.append(item)
#     return flattened_list
# l1 = [1, [2, 3], [4, 5, [6, 7]]]

# # Flatten the nested list
# one_d_list = flatten_list(l1)
# print(one_d_list)

# def fib(n):
#     if n<=1:
#         return n
#     else:
#         return fib(n-1)+fib(n-2)

# for i in range(0,10):
#     print(fib(i))

# s='ShivModi1203'
# c1=0
# c2=0
# c3=0
# for i in s:
#     if i.isalpha():
#         if i>'A' and i<'Z':
#             c1+=1
#         else:
#             c2+=1
#     if i.isdigit():
#         c3+=1    

# print("c1 = ",c1)
# print("c2 = ",c2)
# print("c3 = ",c3)


# L1 = [1, 1.33, 'GFG', 0, 'NO', None, 'G', True] 
# val1, val2 = 0, '' 
# for x in L1: 
#  if(type(x) == int or type(x) == float): 
#     val1 += x 
#  elif(type(x) == str): 
#     val2 += x 
#  else: 
#     break r
# print(val1, val2)

# t = (1, (9, 5), 7, 2) 
# a, b, c, d = t 
# print (d)

# a ={} 
# dict = a.fromkeys(['a', 'b', 'c', 'd'], 98) 
# print (a) 
# print (dict)

# l1=[1,[2,[3,4]]]
# l1.extend([8,8,8,8,8])
# # print(l1)
# p=l1.append(69)
# print(l1)

# developers = set(['Me', 'You', 'False', 'True'])
# developers.remove('Me') 
# developers.remove('You') 
# print (developers) 

# s='welcome to ldrp'
# not_i=s.index('not')
# bad=s.index('bad')
# temp=list(s)
# if not_i<bad:
#     temp[not_i:bad+3]='good'
# s=""
# s=s.join(temp)
# s=s[::-1]
# print(s)

# print(s[-10::-2])

# def decimal_to_binary(n,i,ans):
#     if n<=0:
#         return ans
#     else:
#         bit=n&1
#         ans=ans+bit*pow(10,i)
#         n=n>>1
#         i+=1
#         return decimal_to_binary(n,i,ans)


# print(decimal_to_binary(5,0,0))
# class Error(Exception):
#     pass
# class StringLength(Error):
#     pass

# try:
#     s1=input("Enter the string : ")
#     if len(s1)<6 and len(s1)>2:
#         print("string lenght is valid") 
#     else:
#         raise StringLength
# except StringLength:
#     print("The String lenght is not valid")

class Employee:
    salary=2500
    # value=55
    def __init__(self,name,department):
        self.name=name   #instance variable name
        self.department=department #instance variable department

    def show(self):  #instnace menthod show
        print('Name : ',self.name,"  Department : ",self.department,"  Salary : ",Employee.salary)
    
    # @classmethod
    # def change(cls,salary):
    #     cls.salary=salary

    # @staticmethod
    # def m1(value):
    #     print('Value is ',value)
    
# ob1=Employee('Shiv','CE')
# ob1.show()
# # Employee.change=classmethod(Employee.change)
# ob1.change(45000)
# ob1.show()
# ob1.m1(56)


# list operations
# d1={'one':1,'two':2,'three':3}
# # d2={'two':2,'one':1}
# d1.popitem()
# print(d1)
# l1=[1,2,3,4,5,6,7]
# l3=[1,2,3,4]
# t1=(1,2,3,4,5,6,7)
# l2=[1,2,[3,4,[5,6]],[7,8]]
# import functools
# print(functools.reduce(lambda x,y:x+y,l3))
# print(l1.index(3))
# print(max(t1))

# def disarium(n,sum):
#     if n==0:
#         return sum
#     else:
#         n=str(n)
#         i=len(n)
#         n=int(n)
#         x=n%10
#         n=int(n/10)
#         sum+=(x**i)
#         return disarium(n,sum)
# print(disarium(75,0))

# def extra(l1,s1):
#     l2=[]
#     for i in l1:
#         if i not in s1:
#             l2.append(i)
    
#     return l2

# l1=['s','t','r','i','n','g','w']
# s1='string'
# print(extra(l1,s1))
# s1='shiv'
# ls=list(s1)
# print(ls)
def diff(s,t):
    s1=""
    ls=list(s)
    lt=list(t)
    for i in lt:
        if i not in ls:
            s1+=i
    
    return s1
s='abcd'
t='abcde'
print(diff(s,t))

