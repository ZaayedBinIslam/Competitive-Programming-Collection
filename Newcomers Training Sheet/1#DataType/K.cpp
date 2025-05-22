// Created on 24-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    auto min = min_element(arr, arr+3);
    auto max = max_element(arr, arr+3);
    cout << *min << " " << *max;
    return 0;
}