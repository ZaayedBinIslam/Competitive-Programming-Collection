// Created on 18-Feb-24
//RE. will prolly get tle for nested loop. solve with diff techqn
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        string s;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> s;
        int length = n;
        for (int i = 0; i < n; i++) {
            int modulo = 1;
            for (int j = 0; j < length; j++) {
                modulo *= arr[j];
                if (j == length - 1)
                    cout << modulo % m << ' ';
            }
            if (s[i] == 'L') {
                arr.erase(arr.begin());
                arr.shrink_to_fit();
                length--;
            } else if (s[i] == 'R') {
                arr.erase(arr.end());
                arr.shrink_to_fit();
                length--;
            }
        }
        cout << endl;
    }
    return 0;
}