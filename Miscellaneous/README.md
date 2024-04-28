## Taking blank line as input
```cpp
string bl;
getline(cin,bl);
```
## SetPrecision Function
### Significant Figures
```cpp
float num=2.71828;
cout<<setprecision(3)<<num;
```
```
2.72
```
### Decimal Places
```cpp
float num=2.71828;
cout<<fixed<<setprecision(3)<<num;
```
```
2.718
```
## next_permutation and prev_permutation in C++
[GeeksforGeeks](https://www.geeksforgeeks.org/stdnext_permutation-prev_permutation-c/)

## Logarithms, Base Conversion, Memoization
### Logarithms and Digits
![Logarithms and Digits](https://github.com/faiyaz103/Competitive-Programming/blob/main/resources/log_and_digits.jpg)
### Base Conversion
![Base Conversion](https://github.com/faiyaz103/Competitive-Programming/blob/main/resources/base_conv_log.jpg)
###  Memoization Basic
[GeeksforGeeks](https://www.geeksforgeeks.org/memoization-1d-2d-and-3d/)

## upper_bound and lower_bound for Vector
```cpp
lower_bound (Iterator first, Iterator last, const val);
```
lower_bound returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘val’  and if the value is not present in the vector then it returns the end iterator.
```cpp
upper_bound (Iterator first, Iterator last, const val);
```
upper_bound returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘val’  and if the value is not present in the vector then it returns the end iterator.
```cpp
#include<bits/stdc++.h>
using namespace std;

int main ()
{

  vector < int >v;

  v.push_back (1);
  v.push_back (2);
  v.push_back (4);
  v.push_back (4);
  v.push_back (7);

  auto it = lower_bound (v.begin (), v.end (), 4);

  //returns the address position at which 4 is present in memory if it is present
  cout << &(*it) << endl;

  // returns the no. stored at the itr memory address
  cout << *it << endl;

  // returns the index position of searched element in array
  cout << it - v.begin () << endl;

  auto it2 = upper_bound (v.begin (), v.end (), 4);

  // returns the no. stored at the itr memory address
  cout << *it2 << endl;

  // returns the index position of searched element in array
  cout << it2 - v.begin () << endl;

  return 0;
}
```
```
0x5563325e6ef8
4
2
7
4
```