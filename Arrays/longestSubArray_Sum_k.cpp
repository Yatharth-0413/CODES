#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    map<long long, int> prefixsum;
    long long sum=0;
    int len=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        // prefixsum[sum]=i;
        
        if(sum==k) len=max(len,i+1);
        
        long long rem=sum-k;
        if(prefixsum.find(rem)!=prefixsum.end()){
            int local_len=i-prefixsum[rem];
            len=max(local_len,len);
        }
        if(prefixsum.find(sum)==prefixsum.end()){
            prefixsum[sum]=i;
        }        
    }
    return len;
}
int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        int res;
        int res=0;
        int num=0;
        for(auto p:m){
            if(p.second>res){
                res=p.second;
                num=p.first;
            } 
                
        }
        return num;
        
    }
int main()
{
    cout<<floor(3/2);
    return 0;
}