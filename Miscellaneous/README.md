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