# Modular Congruences
```
a & b congruent to each other under N if:
    a % N = b % N = r
Expressed as:
    a ≡ b (mod N)
Example:
    13 ≡ 41 (mod 7)
```
## Some Properties
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