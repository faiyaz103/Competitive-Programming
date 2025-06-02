/*
Given n activities with start times in start[] and finish times in 
finish[], find the maximum number of activities a single person can 
perform without overlap. A person can only do one activity at a time.
*/

#include<bits/stdc++.h>
using namespace std;

int activitySelection(vector<int> &start,vector<int> &finish){

    // Take a 2D vector
    vector<vector<int>> arr;
    for(int i=0; i<start.size(); i++){
        arr.push_back({start[i],finish[i]});
    }

    // Sort by finishtime
    sort(arr.begin(), arr.end(),
        [](const vector<int> &a,const vector<int> &b){
            return a[1]<b[1];
        }
    );

    int ans=1, j=0;
    for(int i=0; i<arr.size(); i++){

        if(arr[i][0] > arr[j][1]){
            ans+=1;

            j=i;
        }
    }

    return ans;
}

int usingPriorityQueue(vector<int> &start, vector<int> &finish){

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> p;

    for(int i=0; i<start.size(); i++){
        p.push({finish[i],start[i]});
    }

    int ans=0, finishTime=-1;
    while(!p.empty()){
        pair<int,int> actv=p.top();
        p.pop();
        
        if(actv.second > finishTime){
            ans+=1;
            finishTime=actv.first;
        }
    }

    return ans;
}

int main(){
    
    vector<int> start = {0,5,3,8,5,1};
    vector<int> finish = {6,7,4,9,9,2};

    cout<<activitySelection(start,finish)<<"\n";
    cout<<"Using priority queue: "<<usingPriorityQueue(start,finish);

    return 0;
}