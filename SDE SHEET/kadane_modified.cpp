#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")
auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

class devyanshi{
private:
    int a;int b;
public:
    devyanshi(int a,int b){
        this->a=a;
        this->b=b;
    }
    // int sum();
    int sum(){
        return a+b;
    }


};


class node{
    public:
        int data;
        node *next;
        node(int data){
            this->data=data;
            this->next=nullptr;
        }
};

// int devyanshi:: sum(){
//     return a+b;
// }

// [2,3]  ---------> [3,nullpotr]

int main(){
    // node *head=new node(1);
    // node *second=new node(2);
    // head->next=second;
    long long ans=1;
    for(int i=0;i<9;i++){
        ans=ans*900000;
    }
    cout<<ans<<endl;
    cout<<LONG_LONG_MAX<<endl;

    cout<<pow(244140,9)<<endl<<endl;
    if(pow(244140,9)>LONG_LONG_MAX) cout<<"no";
    return 0;
}