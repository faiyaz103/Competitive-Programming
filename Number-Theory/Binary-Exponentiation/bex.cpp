#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bex(ll base, ll power){

    int res=1;

    while(power>0){

        if(power%2!=0){
            res*=base;
            power-=1;
        }

        base*=base;
        power/=2;
    }

    return res;
}

int main(){

    ll base,power;
    cin>>base>>power;
    
    ll ans=bex(base,power);

    cout<<ans<<"\n";

    return 0;
}

//O(log(n))