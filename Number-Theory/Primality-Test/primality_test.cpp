#include<bits/stdc++.h>
using namespace std;

string isprime(int n){

    if(n==1){
        return "NO";
    }

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return "NO";
        }
    }

    return "YES";
}

int main(){
    int n;
    cin>>n;

    cout<<isprime(n)<<"\n";

    return 0;
}

//O(sqrt(n))