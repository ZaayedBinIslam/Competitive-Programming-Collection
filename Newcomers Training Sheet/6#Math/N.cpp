// Created on 30-Sep-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void toDecimal(string num, int base) {
    ll decNumber = 0;

    //save digitNum/power in a var, cause it decreases in descending order
    // length-1 cause for the last digit the power is 0.if we take length as is,last digit power becomes 1
    int digitNum = num.length() - 1;

    for (int i = 0; i < num.length(); i++) {
        //convert digit from char to int. 0 ascii value 48. so char-'0' gives the actual value for the digits. for alphabets, we minus 7. check ascii table to understand
        ll digit;
        if (num[i] < 58) {
            digit = num[i] - '0';
        } else {
            digit = num[i] - '0' - 7;
        }

        //formula digit*base^digit number. note: power decreases in descending order
        decNumber += digit * ((ll) pow(base, digitNum));
        digitNum--;
    }
    cout << decNumber << endl;
}

void toBaseX(ll num, ll base) {
    vi v;
    while (num) {
        v.push_back(num % base);
        num /= base;
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > 9) {
            char c =  65 + (char) (v[i]-10);
            cout<<c;
        } else cout << v[i];
    }
}

int main() {
    int T;
    cin >> T;

    if (T == 1) {
        string num; //Num length at most 10
        int x;
        cin >> num >> x;
        toDecimal(num, x);
    } else {
        ll N;
        ll X;
        cin >> N >> X;
        toBaseX(N, X);
    }
    return 0;
}