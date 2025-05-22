// Created on 29-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n;
    cin >> n;
    int a[n];
    int min,minIndex=1;
    cin>>a[0];
    min=a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if(a[i]<min){
            min=a[i];
            minIndex=i+1;
        }
    }

    cout<<min<<" "<<minIndex;
    return 0;
}