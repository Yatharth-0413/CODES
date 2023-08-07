#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i: nums){
            s.insert(i);
        }
        vector<int> retv;
        for(auto i=s.begin();i!=s.end();i++) retv.push_back(*i);
        return s.size();
}

void rotate(vector<int>& nums, int k) {
        vector<int> v(nums.size());
        for(int i=0;i<nums.size();i++){
            
            v[(i+k)%nums.size()]=nums[i];
            
        }
        for(auto i:v) cout<<i<<" ";
}
void moveZeroes(vector<int>& nums) {
        int ct=count(nums.begin(),nums.end(),0);
        while(find(nums.begin(),nums.end(),0)!=nums.end()){
            auto it=find(nums.begin(),nums.end(),0);
            nums.erase(it);
        }
        while(ct--) nums.push_back(0);
    }
int main()
{
    vector<int> v={0,1,0,3,12};
    // cout<<removeDuplicates(v);
    // rotate(v,3);
    moveZeroes(v);
    for(auto i:v) cout<<i<<" ";

}