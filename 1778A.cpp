// Created on 23-Feb-24
//
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int sum=0;
        bool flag= false;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
            if(i>0 && !flag){
                if (arr[i-1]==-1)
            }
        }
    }
    return 0;
}