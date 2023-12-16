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
    void solve(int i,int j,string &str,vector<string>&ans,vector<vector<int>> &m, int n,set<pair<int,int>> s){
        if(i==n-1 && j==n-1){
            ans.push_back(str);
            return;
        }
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
        for(int k=0;k<4;k++){
            int nghRow=i+row[k];
            int nghCol=j+col[k];
            if(nghRow>=0 && nghRow<n && nghCol>=0 && nghCol<n){
                if(s.find({nghRow,nghCol})==s.end() && m[nghRow][nghCol]==1){
                    s.insert({nghRow,nghCol});
                    if(k==0) str+='U';
                    if(k==1) str+='R';
                    if(k==2) str+='D';
                    if(k==3) str+='L';
                    solve(nghRow,nghCol,str,ans,m,n,s);
                    str.pop_back();
                    s.erase({nghRow,nghCol});
                }
            }
        }
    }
public:
    void findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        set<pair<int,int>> s;
        string str="";
        solve(0,0,str,ans,m,n,s);
        cout<<"size is "<<ans.size()<<endl;
        for(auto it:ans){
            for(auto ptr:it){
                cout<<ptr;
            }
            cout<<endl;
        }
    }
};
int main(){
    vector<vector<int>> m={{1,1,1},{0,1,1},{1,0,1}};
    Solution sj;
    sj.findPath(m,3);
    return 0;
}