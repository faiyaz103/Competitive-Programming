#include<bits/stdc++.h>
using namespace std;

vector<int> memo;
int fib(int n){
    if(n<=1) return n;

    if(memo[n]!=-1) return memo[n];

    cout<<"calculating for number: "<<n<<endl;
    memo[n] = fib(n-1)+fib(n-2);

    return memo[n];
}

int main(){
    int n=5;
    memo.assign(n+1, -1);

    cout<<fib(n)<<endl;

    return 0;
}