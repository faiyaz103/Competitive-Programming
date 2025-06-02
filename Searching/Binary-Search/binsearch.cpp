#include<bits/stdc++.h>
using namespace std;

bool bin_search(int a[], int n, int target){

    int start=0, end=n-1, mid;
    
    while(start<=end){
        mid=(start+end)/2;

        if(a[mid]==target){
            return true;
        }
        else if(a[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }

    return false;
}

int main(){
    int a[]={1,5,7,12,45,47,88};

    int n=sizeof(a)/sizeof(a[0]);

    if(bin_search(a,n,9)){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
}