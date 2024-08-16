#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long int ul;
typedef string sr;
typedef double dbl;
typedef long double ldbl;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ul> vul;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<ll,ll>> vpl;

typedef set<int> si;
typedef set<ll> sll;
typedef set<char> sc;
typedef set<string> ss;
typedef set<pair<int,int>> spi;
typedef set<pair<ll,ll>> spl;

typedef unordered_set<int> usi;

typedef stack<int> sti;
typedef stack<ll> stll;
typedef stack<char> stc;
typedef stack<string> sts;

typedef map<int,int> mi;
typedef map<ll,ll> mll;
typedef map<ll,int> mli;
typedef map<char,int> mci;

#define fri(i, a, b) for (int i = a; i < b; i++)
#define rfi(i, a, b) for (int i = a; i >= b; i--)
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define rf(i, a, b) for (ll i = a; i >= b; i--)
#define fauto(x, a) for (auto x : (a))
#define fref(x, a) for (auto& x : (a))

#define ft first
#define sd second
#define pb push_back
#define popb pop_back
#define ins insert
#define bgn begin()
#define en end()
#define all(x) x.begin(), x.end()

int Gcd(int a, int b){

    if(b==0){
        return a;
    }
    else{
        return Gcd(b,a%b);
    }
}

int32_t main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int t;
    cin>>t;

    while(t--){
        
        int n,q;
        cin>>n>>q;

        int a[n], suf[n+2], pre[n+1];
        pre[0]=0;
        fri(i,0,n){
            cin>>a[i];
            pre[i+1]=Gcd(a[i],pre[i]);
        }

        suf[n+1]=0;
        rfi(i,n,1){
            suf[i]=Gcd(suf[i+1],a[i-1]);
        }

        while(q--){
            int l,r;
            cin>>l>>r;

            cout<<Gcd(pre[l-1],suf[r+1]);
            cout<<"\n";
        }
    }
  
    return 0;
}
    