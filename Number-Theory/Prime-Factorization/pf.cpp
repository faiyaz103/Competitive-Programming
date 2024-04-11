#include<bits/stdc++.h>
using namespace std;

void pf(int n, vector<int> &fct){

    while(n%2==0){
        n/=2;
        fct.push_back(2);
    }

    for(int i=3; i*i<=n; i+=2){

        while(n%i==0){
            n/=i;
            fct.push_back(i);
        }
    }

    if(n>1){
        fct.push_back(n);
    }

}

int main(){

    int n;
    cin>>n;

    vector<int> fct;

    pf(n,fct);

    for(auto x:fct){
        cout<<x<<' ';
    }

    return 0;

}

// O(sqrt(n))