//done ac.

#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    long long int price[n];
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    sort(price, price + n, greater<int>());//descending order

    long long int prefixSum[n]; // even though array elemenrts size <10^6 ,sum can exceed int range and overflow. so take long var
    prefixSum[0] = price[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + price[i];
    }


    while (q--) {
        int x, y;
        cin >> x >> y;
        long long int totalValue = 0;
        if (x - y == 0)
            totalValue = prefixSum[x - 1];
        else
            totalValue = prefixSum[x - 1] - prefixSum[x - y - 1];
        cout << totalValue << endl;
    }

    return 0;
}
