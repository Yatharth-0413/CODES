#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")
auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        stack<int> st;
       vector<int> s,myans;
        int i;
        for(i=nums.size()-1;i>0;i--){
            if(st.empty()==true){
                st.push(nums[i]);
                s.push_back(nums[i]);
            } 
            else{
                if(st.top()<=nums[i]){
                    st.push(nums[i]);
                    s.push_back(nums[i]);
                }
                else{
                    s.push_back(nums[i]);
                    break;
                }

            }

        }
        sort(s.begin(),s.end());
        int maxi=-2;
        for(int l=0;l<s.size();l++){
            if(s[l]>nums[i]){
                maxi=s[l];
                s[l]=-1;
                break;
            }
        }
        // for(auto it:s) cout<<it<<"*";
        // cout<<endl;

        for(int k=0;k<i;k++){
            cout<<nums[k]<<" ";
        }
        if(maxi!=-2) cout<<maxi<<" ";
        for(auto it:s){
            if(it!=-1) cout<<it<<" ";
        }


    }
};

int main(){
    // vector<int> nums={2,1,5,4,3,0,0};
    vector<int> nums={1,3,2};
    Solution sj;
    sj.nextPermutation(nums);
}
