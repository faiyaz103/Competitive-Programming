## Some Basics
```
(a + b) % m = ((a % m) + (b % m)) % m
(a * b) % m = ((a % m) * (b % m)) % m
(a - b) % m = ((a % m) - (b % m) + m) % m
```
### Division Under Mod
```
25 / 5 = 25 * (1 / 5)
```
- 5 and 1/5 are **Multiplicative Inverse** of each other
- To apply division under mod find the **multiplicative inverse of the divisior.**
#### Multiplicative Inverse Under mod
```
(2 * p) % 5 = 1, where p is the multiplicative inverse of 2.
So, we can say p = 3, cause 6 % 5 = 1
```
- That means for mod 5, dividing a number by 2 is similar to multiplying it with 3.
```
For ( a / b) % m
1. Does multiplicative inverse of b always exists?
2. If so then how to find it?
```
Answer is:
```
1. if gcd(b, m) = 1 or m is a prime number then yes.
2. When m is a prime number:
    Multiplicative inverse of b = b^(m - 2) % m
```

## Modular Congruences
```
a & b congruent to each other under N if:
    a % N = b % N = r
Expressed as:
    a ≡ b (mod N)
Example:
    13 ≡ 41 (mod 7)
```
### Some Properties
```
if a % N = b % N = r
```
1. 
```
(a+x) % N = (b+x) % N
```
2. 
```
(a*x) % N = (b*x) % N
```
3. 
```
(a-b) % N = 0
```
4. If a*b = c
```
(a%N) * (b%N) = c%N
```

## Divisibility by 9 and 3
- Check whether 34343493094304 is divisible by 3 or 9
```
12345 % 9
= ( (1 * 10^4)+(2 * 10^3)+...+(5 * 10^0) ) % 9
= ( (1 * (9999 + 1))+(2 * (999 + 1))+...+(5 * (1)) ) % 9
= (1 + 2 + 3 + 4 + 5) % 9
= 6
```

## Basic Combinatorics
nCr = n!/r! * (n-r)! 
- Calculate factorial for all 1 to n in an array.
- Also calculate the array for multiplicative inverse factorial in reverse order
    - We got n!
    - Now, Calculate multiplicative inverse of n!.
    - From there we can easily calculate the rest.
    - Multiplicative inverse of (n-1)! = n * inverse of n!
    - Multiplicative inverse of (n-2)! = (n-1) * inverse of (n-1)!
    - and so on
- So ncr becomse n! * mul. inverse(r!) * mul. inverse((n-r)!) under mod M