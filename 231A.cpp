// Created on 25-Feb-24
//
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    int totalSum = 0;
    while (n--) {
        int sum = 0;
        int flag = 0;
        int num[3];

        for (int i = 0; i < 3; i++) {
            cin >> num[i];
            if (num[i] == 1) sum++;
            else continue;

            if (sum >= 2) {
                flag = 1;
                
            }
        }
        totalSum += flag;
    }
    cout << totalSum << endl;
    return 0;
}