#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7, N=10000000;

ll fct[N+1],invfct[N+1];

ll modular_exponentiantion(ll base, ll power){

    ll res=1;

    while(power>0){
        if(power%2!=0){
            res=(res*base)%mod;
            power-=1;
        }

        base=(base*base)%mod;
        power/=2;
    }

    return res;
}

void compute_factorial(){

    fct[0]=1;

    for(int i=1; i<=N; i++){
        fct[i]=(fct[i-1]*i)%mod;
    }

    invfct[N]=modular_exponentiantion(fct[N],mod-2);

    for(int i=N-1; i>=0; i--){
        invfct[i]=((i+1)*invfct[i+1])%mod;
    }
    
}
int main(){
    // Calculate nCr

    compute_factorial();

    ll n,r;
    cin>>n>>r;

    if(n<0 || r<0 || r>n){
        cout<<"Invalid n or r"<<"\n";
        return 0;
    }

    ll ans=fct[n]*invfct[r]%mod*invfct[n-r]%mod;
    cout<<ans<<"\n";

    return 0;
}