#Problem        : Yet Another Compliance Problem
#Language       : Python
#Compiled Using : py_compile
#Version        : Python 2.7.8
#Input for your program will be provided from STDIN
#Print out all output from your program to STDOUT

from __future__ import print_function
import sys

data = sys.stdin.read().splitlines()

def factorial(n):return reduce(lambda x,y:x*y,[1]+range(1,n+1))

for line in data:
    d = {}
    num = 0
    for i in line:
        num += 1
        if i in d:
            d[i] += 1
        else:
            d[i] = 1
    flag = False
    fal = False
  
    deno = 1
    for key in d:
        if(d[key]%2 != 0 and flag == False):
            flag = True
        elif(d[key]%2 != 0 and flag == True):
            print("0")
            fal = True
            break
        else:
            deno = deno*factorial(d[key]/2)
    
    if(fal == False):
        print(factorial(num/2)/deno)