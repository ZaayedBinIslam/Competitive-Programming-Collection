// Created on 29-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n;
    cin >> n;
    int n2=n;
//    int digits = (int) log10(n) + 1;
//    for (int i = 0; i < digits; i++) {
//
//    }
    int reversedNum=0;
    while (n != 0) {
        reversedNum=(reversedNum*10)+(n%10);
        n/=10;
    }
    cout<<reversedNum<<endl;
    if(n2==reversedNum) cout<<"YES";
    else cout<<"NO";
    return 0;
}