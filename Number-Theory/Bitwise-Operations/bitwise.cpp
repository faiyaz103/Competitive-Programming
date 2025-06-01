#include<bits/stdc++.h>
using namespace std;

int main(){

    int x=148, y=17, z=35;

    // check if a number is even or odd
    if(x & 1){
        cout<<"odd number"<<"\n";
    }
    else{
        cout<<"even number"<<"\n";
    }

    // Check if power of 2
    if(z & (z-1)){
        cout<<"Not power of 2"<<"\n";
    }
    else{
        cout<<"power of 2"<<"\n";
    }

    // Check 3rd bit set or not
    int k=2;
    if(x & (1<<k)){
        cout<<"set"<<"\n";
    }
    else{
        cout<<"Not set"<<"\n";
    }

    // toggle 3rd bit and check
    x = x ^ (1<<k);
    if(x & (1<<k)){
        cout<<"set"<<"\n";
    }
    else{
        cout<<"Not set"<<"\n";
    }

    // Now set it again and check
    x = x | (1<<k);
    if(x & (1<<k)){
        cout<<"set"<<"\n";
    }
    else{
        cout<<"Not set"<<"\n";
    }

    // Now unset it again and check
    x = x & ~(1<<k);
    if(x & (1<<k)){
        cout<<"set"<<"\n";
    }
    else{
        cout<<"Not set"<<"\n";
    }

    // Find modulas of 2^2 for z=35
    int mod = z & ((1<<k) - 1);
    cout<<mod<<"\n";

    // Swap y and z
    y = y ^ z;
    z = y ^ z;
    y = y ^ z;
    cout<<"y= "<<y<<"\n"<<"z= "<<z<<"\n";

    // Find the number of set bits in y
    cout<<__builtin_popcount(y)<<"\n";

    return 0;
}