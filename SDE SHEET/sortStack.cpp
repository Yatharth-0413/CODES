#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")
auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
class sorting{
    private:
        stack<int> s;
    public:
        sorting(stack<int>s){
            this->s=s;
        }
        void helper(stack<int>&s,int num){
            if(s.empty()){
                s.push(num);
                return;
            }
            else{
                if(s.top()<num){
                    s.push(num);
                }
                else{
                    int num2=s.top();
                    s.pop();
                    helper(s,num);
                    s.push(num2);
                }
            }
        }
        void sortStack(stack<int> &s){
            // base case
            if(s.empty()) return;
            int num=s.top();
            s.pop();
            sortStack(s);
            helper(s,num);
        }
};
int main(){
    stack<int> s;
    for(int i=0;i<5;i++){
        int data;
        cin>>data;
        s.push(data);
    }
    sorting sj(s);
    sj.sortStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}