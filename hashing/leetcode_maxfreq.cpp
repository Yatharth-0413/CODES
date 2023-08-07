#include<bits/stdc++.h>
using namespace std;

int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    vector<int> stoVal;
    stoVal.push_back(0);

    for(int i=1;i<nums.size();i++){
        int data=i*nums[i]-accumulate(nums.begin(),nums.begin()+i,0);
        stoVal.push_back(data);

    }
    int result=-1;
    for(auto it:stoVal) cout<<it<<" ";
    auto it=find(stoVal.begin(),stoVal.end(),k);
    cout<<endl;
    if(it!=stoVal.end()){
        int ct=count(stoVal.begin(),stoVal.end(),k);
        if(ct!=1) return it-stoVal.begin()+1+ct;
        return it-stoVal.begin()+1;
    } 
    else{

        for(int m=0;m<stoVal.size();m++){
            if(stoVal[m]<k) result=m;
            else return result+1;
        }
        return result+1;
    }
    


    
}

int main()
{
    vector<int> v={9930,9923,9983,9997,9934,9952,9945,9914,9985,9982,9970,9932,9985,9902,9975,9990,9922,9990,9994,9937,9996,9964,9943,9963,9911,9925,9935,9945,9933,9916,9930,9938,10000,9916,9911,9959,9957,9907,9913,9916,9993,9930,9975,9924,9988,9923,9910,9925,9977,9981,9927,9930,9927,9925,9923,9904,9928,9928,9986,9903,9985,9954,9938,9911,9952,9974,9926,9920,9972,9983,9973,9917,9995,9973,9977,9947,9936,9975,9954,9932,9964,9972,9935,9946,9966};
    
    cout<<maxFrequency(v,3056);
    return 0;
}