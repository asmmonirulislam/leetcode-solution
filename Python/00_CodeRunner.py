from typing import List

def fibo(n:int, dp:List[int])->int:
    if n<=1: return n
    elif dp[n] != -1: return dp[n]
    dp[n] = fibo(n-1, dp)+fibo(n-2, dp)
    return dp[n]

def fib(n:int)->int:
    dp = [-1 for _ in range(n+1)]
    print (fibo(n, dp))
    
fib(6)