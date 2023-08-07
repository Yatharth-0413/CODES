#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& nums) {
        vector<int> original=nums;
        sort(original.begin(),original.end());
        int x=0;
        int flag=1;
        while(x<original.size() && flag!=0){
            for(int i=0;i<original.size();i++){
                if(original[i]==nums[(i+x)%original.size()]){
                    flag=0;
                }
                else{
                    flag=1;
                    break;
                } 
                    
            }
            x++;
        }
        if(flag==0) return true;
        return false;

    }
int main(){
    return 0;
}