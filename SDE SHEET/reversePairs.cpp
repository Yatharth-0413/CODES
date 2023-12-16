#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")
auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

class Solution{
private:
        int ct=0;
   
    void merge(vector<int> &nums,int low,int mid,int high){
        int left=low,right=mid+1;
        int flag=0;
        int left_dupliacte=low,right_duplicate=mid+1;
        vector<int> temp;
        while(left<=mid && right<=high){
            if(nums[left]>=nums[right]){
                if(!flag){
                flag=1;
                while(left_dupliacte<=mid && right_duplicate<=high){
                    if(nums[left_dupliacte]>(long long)2*(long long)nums[right_duplicate]){
                        ct+=(mid-left_dupliacte+1);
                        right_duplicate++;
                    }
                    else{
                        left_dupliacte++;
                    }
                }
            }
                temp.push_back(nums[right]);
                right++;
            }
            else{
                temp.push_back(nums[left]);
                left++;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++) nums[i]=temp[i-low];
        
        
    }
    void mergeSort(vector<int> &nums,int low,int high){
        if (low >= high) return;
        int mid=low+(high-low)/2;
        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
public:
    int reversePairs(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return ct;
    }
};
int main(){
    vector<int> nums={1,3,2,3,1};
    Solution sj;
    cout<<sj.reversePairs(nums)<<endl;
    return 0;
}