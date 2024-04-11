//Task: Calculate b^p % m
//Logic: (a*b)%m = ((a%m) * (b%m)) % m

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bex(ll base, ll power, ll mod){

    int res=1;

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

    ll base,power,mod;
    cin>>base>>power>>mod;
    
    ll ans=bex(base,power,mod);

    cout<<ans<<"\n";

    return 0;
}

//O(log(n))