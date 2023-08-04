// this is pair in stl

#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p;
    pair<int,int> p_arr[2];
    p=make_pair(1,2);
    p_arr[0]={1,3};
    p_arr[1]={1,4};

    cout<<p.first<<" "<<p.second;

    return 0;
}