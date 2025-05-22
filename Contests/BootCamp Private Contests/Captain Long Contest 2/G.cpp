// Created on 17-Feb-24
//not slved. solve frequency array stuff

#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long int counter = 0;
    cin >> n;
    vector<long long int> v;
    for (int i = 0; i < n; i++) {
        long long int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for (long long int i = 0; i < n;) {
        long long int tempCounter = 0;
        long long int j = i;
        while (v[j] == v[j + 1] && j + 1 <= n) {
            tempCounter++;
            j++;
        }

        if (tempCounter > v[i]) {
            counter += tempCounter - v[i];
        } else if (tempCounter >= 1 && tempCounter < v[i]) {
            counter += v[i] - tempCounter;
        }
        i+=tempCounter;
    }
    cout << counter << endl;
    return 0;

}