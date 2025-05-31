#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod=1e9+7;

ll moduler_exponentiation(ll base, ll power){

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

int main(){

    ll a,b;
    cin>>a>>b;

    ll mulinv_b = moduler_exponentiation(b,mod-2);

    cout<<"Multiplicative inverse of "<<b<<" modulo 1e9+7 is "<<mulinv_b<<"\n";

    ll res=a*mulinv_b;
    res%=mod;

    cout<<"(a/b) % m = (a * multiplicative inverse of b) % m = "<<res<<"\n";

    return 0;
}