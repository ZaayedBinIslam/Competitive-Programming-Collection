// Created on 30-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


int main() {
    int n;
    cin >> n;
    if (n == 1) cout << "0";
    if (n == 2) cout << "1";
    else if(n>2){
        ll firstNum = 0;
        ll secNum = 1;
        ll resultNum = 0;
        for (int i = 3; i <= n; i++) {
            resultNum = firstNum + secNum;
            firstNum = secNum;
            secNum = resultNum;
        }
        cout << resultNum;
    }
    return 0;
}
