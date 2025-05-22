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

    int l=0,r=(int)s.length()-1;
    bool isPalindrome=true;
    while(l<r){
        if(s[l]!=s[r]){
            isPalindrome= false;
            break;
        }
        else{
            l++;
            r--;
        }
    }
    if(isPalindrome) cout<<"YES";
    else cout<<"NO";





    return 0;
}