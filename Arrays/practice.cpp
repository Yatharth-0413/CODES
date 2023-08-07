#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int profit=INT_MAX;
    if(is_sorted(prices.begin(),prices.end(),greater<int>())==true){
        return 0;
    }
    while(profit==INT_MAX){

        auto max_index=max_element(prices.begin(),prices.end());
        auto min_index=min_element(prices.begin(),prices.end());

        if(min_index-prices.begin()<max_index-prices.begin()) profit=*max_index-*min_index;
        else prices.erase(max_index);
        
    }
    return profit;
}
/*
int subarraySum(vector<int>& arr, int k) {
        int n = arr.size(); // taking the size of the array
        
        int ans = 0; // ans variable to store our count
        
        for(int i = 0; i < n; i++) // traverse from the array
        {
            int sum = arr[i]; // provide sum with arr[i]
            
            if(sum == k) // if element itself equal to k, then also increment count
                ans++;
            
            for(int j = i + 1; j < n; j++) // now moving forward,
            {
                sum += arr[j]; // add elements with sum
                
                if(sum == k) // if at any point they become equal to k
                    ans++; // increment answer
            }
            
        }
        
        return ans; // and at last, return answer
    }
*/
int searchInsert(vector<int>& arr, int target) {
        int low=0;
        int high=arr.size()-1;
        int mid=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]>target) high=mid-1;
            else low=mid+1;
        }
        cout<<low<<"->"<<mid<<"->"<<high<<endl;
        if(arr[mid]<target){
            
            return low;
        } 
        else return low;
    }

vector<int> searchRange(vector<int>& arr, int target) {
    int low=0;
    int high=arr.size()-1;
    int mid=0;
    vector<int> res;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){ 
            cout<<"mid="<<mid<<endl;
            res.push_back(mid);
            auto it=arr.begin()+mid;
            arr.erase(it);
            // cout<<arr.size()<<"hii"<<endl;
            low=0;
            high=arr.size()-1;

        }
        else if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    } 
    sort(res.begin(),res.end());
    if(res.size()==1) res.push_back(res[0]);
    if(res.size()==0){
        res={-1,-1};
    }
    return res;     
}

int binary_search(vector<int> v,int low,int high,int target){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(v[mid]==target) return mid;
    else if(v[mid]>target) return binary_search(v,low,mid-1,target);
    else return(v,mid+1,high,target);

}
#include<bits/stdc++.h>
int count(vector<int>& arr, int x) {


	return (upper_bound(arr.begin(),arr.end(),x)-lower_bound(arr.begin(),arr.end(),x));
}
int search(vector<int>& arr, int target) {
        int low=0;
        int high=arr.size()-1;

        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
int main()
{
    vector<int> v={4,5,6,7,0,1,2};
    // cout<<binary_search(v,0,9,4);
    cout<<search(v,0);
    // vector<int> nums={2,2};
    // vector<int> result=searchRange(nums,4);
    // for(auto i:result) cout<<i<<" ";
    // cout<<searchInsert(v,7);
    return 0;
}

int subarraySum(vector<int>& nums, int k) {
    multimap<int,int> m;
    int sum=0;
    for(auto i:nums){
        sum+=i;
        m.insert(make_pair(sum,i));
    }        
    int ct=0;
    for(auto itr=m.begin();itr!=m.end();itr++){
        
        if(itr->first==k) ct++;
        else{
            int rem=itr->first-k;
            if(m.find(rem)!=m.end()){
                ct++;
                cout<<ct<<endl;
            }
        }
    }
    return ct;
}
