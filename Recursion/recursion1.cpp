#include<bits/stdc++.h>
using namespace std;


vector<int> reverseArray(int n, vector<int> &nums){
    if(n<=nums.size()/2) return nums;
    n=n-1;
    swap(nums[n],nums[nums.size()-1-n]);
    
    reverseArray(n,nums);
    return nums;
}


int main()
{
    vector<int> v={1,2,3,4,5};
    
    reverseArray(5,v);
    for(auto i:v) cout<<i<<" ";
    return 0;
}