/*Given two arrays: deadline[] and profit[], where the index of deadline[] represents a job ID, and deadline[i] denotes the deadline for that job and profit[i] represents profit of doing ith job. Each job takes exactly one unit of time to complete, and only one job can be scheduled at a time. A job earns its corresponding profit only if it is completed within its deadline.

The objective is to determine:

The maximum profit that can be obtained by scheduling the jobs optimally.
The total number of jobs completed to achieve this maximum profit.*/

/*Input: deadline[] = [2, 1, 2, 1, 1], profit[] = [100, 19, 27, 25, 15]
Output: 2 127
Explanation: The first and third job have a deadline of 2, thus both of them can be completed and other jobs have a deadline of 1, thus any one of them can be completed. Both the jobs with a deadline of 2 is having the maximum associated profit, so these two will be completed, with the total profit gain of 100 + 27 = 127.*/
#include<bits/stdc++.h>
using namespace std;

vector<int> job_seq(vector<int> &deadline,vector<int> &profit){

    int n=deadline.size();

    vector<int> ans={0,0}; //size,profit

    vector<pair<int,int>> jobs;
    for(int i=0; i<n; i++){
        jobs.push_back({deadline[i],profit[i]});
    }

    // If you only want to assign highest priority to the smallest element (min-heap), 
    // then inbuilt greater<type> functional object can be used.
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto &job:jobs){

        if(job.first>pq.size()){
            pq.push(job.second);
        }
        else if(!pq.empty() && pq.top()<job.second){
            pq.pop();
            pq.push(job.second);

        }
    }

    while(!pq.empty()){
        ans[1]+=pq.top();
        pq.pop();
        ans[0]+=1;
    }

    return ans;
}

int main(){

    vector<int> deadline = {2, 1, 2, 1, 1};
    vector<int> profit = {100, 19, 27, 25, 15};

    vector<int> ans=job_seq(deadline,profit);

    cout<<ans[0]<<' '<<ans[1]<<'\n';

    return 0;
}