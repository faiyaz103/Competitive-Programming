#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int>& arr){
    int maxEnd=arr[0];
    int res=arr[0];

    for(int i=1; i<arr.size(); i++){
        maxEnd=max(arr[i],maxEnd+arr[i]);
        res=max(res,maxEnd);
    }
    return res;
}

int main(){
    vector<int> arr={1,4,5,-9,12,4,-5,-1,2,-8};
    cout<<maxSubArraySum(arr)<<endl;
    return 0;
}