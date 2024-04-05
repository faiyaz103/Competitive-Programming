#include<bits/stdc++.h>
using namespace std;

const int N=1000000;
vector<bool> isprime(N+1, true);

void sieve(){

    isprime[0]=isprime[1]=false;

    for(int i=2; i*i<=N; i++){
        if(isprime[i]){
            for(int j=i*i; j<=N; j+=i){
                isprime[j]=false;
            }
        }
    }
}

int main(){

    sieve();

    int x;
    cin>>x;

    if(isprime[x]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

//O(Nlog(logN))