// Created on 18-Feb-24
//done ac
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        int arr[n];
        int counter[101] = {0}; //n+1 cause n

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            counter[arr[i]]++;
        }
        sort(arr, arr + n); //sorted only so that the next loop doesnt run n times in best case scenario.
        int PUcounter = 0;
        for (int i = 1; i <= arr[n - 1]; i++) { //arr[n-1] is the largest number in sorted array
            if (counter[i] == 1) {
                PUcounter++;
            } else if (counter[i] > 1 && counter[i] >= c) // note ,for counter[i]=0, condition is not needed.
                PUcounter += c;
            else if (counter[i] > 1 && counter[i] < c)
                PUcounter += counter[i];
        }
        cout << PUcounter << endl;
    }
    return 0;
}