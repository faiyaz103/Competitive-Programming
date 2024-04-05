# Sieve of Eretosthenes
## Why needed ?
1. Suppose we need to answer Q queries where Q = 1000000.
2. Input: N = 100000000.
3. Output: Prime or not?
4. Will result in TLE.So we preprocess till the maximum possible N and find the answer in O(1) for each query.
