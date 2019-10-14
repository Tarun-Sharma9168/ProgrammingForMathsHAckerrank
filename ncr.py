#!/bin/python3
import os
import math
# Complete the solve function below.
def solve(n):
    for i in range(0,n+1):
         f = math.factorial
         result = (f(n) // f(i) // f(n-i))%(1000000000)
         print(result,end=" ")
t = int(input())

for t_itr in range(t):
    n = int(input())
    solve(n)
    print()

