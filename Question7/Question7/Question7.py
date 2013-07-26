#/usr/bin/env python

def isPrime ( number ):
        for i in range (2, int(number/2)+1):
                if number%i==0:
                        return False;
        return True

num=2
count=0
while True:
        if isPrime(num):
                #print num,
                count+=1
        if count==10001:
                break
        num+=1
print "The 10,001st prime number is ", num, "\n"
raw_input();
