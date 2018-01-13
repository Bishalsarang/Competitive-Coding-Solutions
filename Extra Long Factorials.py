#!/bin/python3

import sys

def extraLongFactorials(n):
    # Complete this function
    fact = 1;
    for i in range(1,n + 1):
        fact = fact * i
    print(fact)

if __name__ == "__main__":
    n = int(input().strip())
    extraLongFactorials(n)
