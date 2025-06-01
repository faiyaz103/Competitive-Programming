## Check if n is even or odd
- Let n=4 (100 in bin) and m=4 (101 in bin)
- Even number has LSB=0
- Odd number has LSB=1
- n & 1; checks the last digit of n
```cpp
if(n & 1){
    Odd
}
else{
    even
}
```
## Check if x is a power of 2, e.g. x=2^k
```bash
2^0 = 00000001  | 2^0 - 1  = 00000000
2^1 = 00000010  | 2^1 - 1  = 00000001
2^2 = 00000100  | 2^2 - 1  = 00000011
2^3 = 00001000  | 2^3 - 1  = 00000111
```
```
2^2         = 00000100
2^2 - 1     = 00000011
-----------------------
&           = 00000000
```
- Check:
```cpp
x & (x-1)
```
- x>0
## Working with k'th bit.
- x = 10010100
- Check 3rd bit, k=2
- 2^2 = 00000100
### Check if k'th bit is set or not.
```
x           = 10010100
2^2         = 00000100
-----------------------
&           = 00000100
```
```cpp
if(x & (1<<k)){
    set
}
else{
    not set
}
```
### Toggle k'th bit.
```cpp
(x ^ (1<<k))
```
### Set k'th bit.
```cpp
(x | (1<<k))
```
### Unset k'th bit.
```cpp
(x & ~(1<<k))
```
## x % 2^k:
- Take x=35
- Take k=2
```
x           = 10000011
2^2 - 1     = 00000011
-----------------------
&           = 00000011 = 3 in decimal
```
```cpp
(x & ((1<<k) - 1))
```
## Swap 2 numbers
```
x = x ^ y
y = x ^ y   | y = (x ^ y) ^ y  = x
x = x ^ y   | x= (x ^ y) ^ (x) = y
```

## A property
- Number of set bits in A = x
- Number of set bits in B = y
- Number of set bits in A ^ B = z, then
- z is even if (x + y) is even
- Else z is odd

## Toggle between 2 values
```cpp
if (x==5){
    x=10
}
if(x==10){
    x=5
}
```
```cpp
x = 10 ^ 5 ^ x
```
## Find the number of set bits in x on O(1)
For int
```cpp
__builtin_popcount(x)
```
for long long
```cpp
__builtin_popcountll(x)
```

