#include<bits/stdc++.h>
using namespace std;

const int N=1000001;
int spf[N];

void sieve(){

    for(int i=0; i<N; i++){
        spf[i]=i;
    }

    for(int i=2; i*i<N; i++){
        if(spf[i]==i){
            for(int j=i*i; j<N; j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}

int main(){

    sieve();

    int n;
    cin>>n;

    while(n!=1){
        cout<<spf[n]<<' ';
        n/=spf[n];
    }
    cout<<"\n";

    return 0;
}