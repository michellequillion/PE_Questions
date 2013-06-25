#!/usr/bin/python
def multiples (n):
    sum = 0
    for x in range (1, n):
        if x%3==0 or x%5==0:
            sum+=x;
    return sum;
 
max = 1000
print (multiples (max))