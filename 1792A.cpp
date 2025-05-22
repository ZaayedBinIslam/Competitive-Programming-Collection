// Created on 18-Feb-24
//done ac
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int health[n];
        for (int i = 0; i < n; i++) {
            cin >> health[i];
        }
        //sort, if 1 1 pair exist then 1st spell else kill each one with 2nd spell

        sort(health, health + n);

        int counter = 0;
        int oneCounter = 0;
        for (int i = 0; i < n; i++) {
            if (health[i] == 1) {
                oneCounter++;
            } else {
                counter += n - i;
                break;
            }
        }
        if (oneCounter % 2 == 0) counter += oneCounter / 2;
        else counter += (oneCounter / 2) + 1;
        cout << counter << endl;
    }
    return 0;
}