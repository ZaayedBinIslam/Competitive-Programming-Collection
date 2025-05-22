// Created on 29-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int x, y;
    cin >> x >> y;
    int luckyCount = 0;
    for (int i = x; i <= y; i++) {
        int temp = i;
        bool lucky = true;
        while (temp != 0) {
            int remainder = temp % 10;
            if (remainder == 7 || remainder == 4) {
                temp /= 10;
                continue;
            } else {
                lucky = false;
                break;
            }

        }
        if (lucky) {
            cout << i << " ";
            luckyCount++;
        }
    }
    if (!luckyCount) cout << "-1";
    return 0;
}