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
    string destCity(vector<vector<string>>& paths) {





















        set<string> start,ends;
        start.insert(paths[0][0]);
        ends.insert(paths[0][1]);

        for(int i=1;i<paths.size();i++){
            if(ends.find(paths[i][0])!=ends.end()){
                ends.erase(paths[i][0]);
            }
            start.insert(paths[i][0]);
            if(start.find(paths[i][1])!=start.end()) continue;
            else ends.insert(paths[i][1]);
        }
        for(auto it:ends) return it;
    }
};

/*
start={a,c,b}
end={f}
*/
int main(){
    vector<vector<string>> paths={{"A","B"},{"C","D"},{"B","E"},{"E","C"},{"D","F"}};
                            // paths[0][1]  -->a,b
    Solution sj;
    cout<<sj.destCity(paths);
    return 0;
}