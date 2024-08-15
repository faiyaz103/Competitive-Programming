# Euclid Division Lemma
- A = (B*q)+r 
# Euclid Division Algo
```
gcd(a,b) = a if b=0
gcd(a,b) = gcd(b, a%b) otherwise
```
# Observations on GCD
1. gcd(a,0) = gcd(0,a) = a
2. gcd(a,b) = gcd(b,a)
3. gcd(a,b) = gcd(a-b,b) = gcd(a,b-a)
```
Let gcd(a,b) = g
That means, a = gx, b = gy
=> a-b = g(x-y) and b-a = g(y-x)
Here, g is the highest common factor
```