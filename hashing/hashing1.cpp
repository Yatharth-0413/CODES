#include<bits/stdc++.h>
using namespace std;

// 2 types of hashing    a) number hashing    b) character hashing

// if character hasing of lowercase letters then ch-'a'
// if character hasing of uppercase letters then ch-'A'
// if character hasing of all letters then total are 256 characters make hsh array of 256 directly 
int main(){
    string s;
    cin>>s;
    int t;
    cin>>t;
    // precompute;
    int hsh[26]={0};
    for(int i=0;i<s.size();i++){
        hsh[s[i]-'a']++;
    }
    while(t--){
        char c;
        cin>>c;
        cout<<hsh[c-'a'];
    }
    return 0;
}