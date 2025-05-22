// Created on 30-Jun-24
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    string s;
    cin >> s;
    int sum=0;
    int size= (int)s.length();
    for (int i = 0; i < size; i++) {
        int c=(int)s[i]-48;
        sum+=c;
    }
    cout<<sum<<endl;
    return 0;
}