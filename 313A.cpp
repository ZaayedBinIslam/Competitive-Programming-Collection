// Created on 31-Aug-25
// done
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'

int main() {
    faster;
    string n;
    cin >> n;

    int num = stoi(n);
    // cout << num << endl;
    if (num >= 0) cout << n << endl;
    else {
        int rightDigit = -num % 10;
        int leftDigit = (-num % 100 - rightDigit) / 10;
        n.pop_back();
        n.pop_back();
        char digit = '0' + min(leftDigit, rightDigit);
        n += digit;
        if (stoi(n)==0) cout<<0<<endl;
        else cout << n << endl;
    }
    return 0;
}
