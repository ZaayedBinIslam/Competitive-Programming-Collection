// Created on 10-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int t;
    cin>>t;

    string s[t];
    char x;
    for(int i=0; i<t; i++) {
        cin>>s[i];
        sort(s[i].begin(),s[i].end());
    }

    for(int i=0; i<t; i++) {
        cout<<s[i]<<endl;
        //sort(s[i].begin(),s[i].end());
    }

    return 0;
}

