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
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        // cols--> matrix[..][0]
        // rows--> matrix[0][..]
        int col_0=1;
        for(int i=0;i<m;i++){
            for(int k=0;k<n;k++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0) matrix[0][j]=0;
                    else col_0=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
            for(int i=0;i<n;i++) matrix[0][i]=0;
        }
        if(col_0==0){
            for(int i=0;i<m;i++) matrix[i][0]=0;

        }
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        
    }
    return 0;
}