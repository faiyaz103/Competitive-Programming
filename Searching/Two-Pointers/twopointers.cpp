// Given a sorted array A (sorted in ascending order), having N integers,
// find if there exists any pair of elements (A[i], A[j]) such that their 
// sum is equal to X.
#include<bits/stdc++.h>
using namespace std;

bool twopointers(int a[], int x, int l){

    int i=0, j=l-1;
    bool ok=false;

    while(i<j){

        if(a[i]+a[j]==x){
            return true;
        }
        else if(a[i]+a[j]>x){
            j--;
        }
        else{
            i++;
        }
    }

    return false;
}

int main(){

    int a[]={2,4,7,8,13};
    int x=22;

    int l=(sizeof(a)/sizeof(a[0]));

    if(twopointers(a,x,l)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    cout<<"\n";

    return 0;
}