# Sieve of Eretosthenes
## Why needed ?
Suppose we need to answer Q queries where Q = 1000000.
Input: N = 100000000.
Output: Prime or not?
Will result in TLE.
So we preprocess till the maximum possible N and find the answer in O(1) for each query.
