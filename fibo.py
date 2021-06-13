# -*- coding: utf-8 -*-
"""
Created on Thu Oct 15 10:43:23 2020

@author: patryk
"""
def fib(n):    # write Fibonacci series up to n
    a, b = 0, 1
    while b < n:
        print(b, end=' ')
        a, b = b, a+b
    print()

def fib2(n): # return Fibonacci series up to n
    print(n)
if __name__ == "__main__":
    import sys
    fib(int(sys.argv[1]))
    #added new comment