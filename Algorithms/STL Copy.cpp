// Created on 16-Feb-24
//

#include <bits/stdc++.h>
#include<algorithm> //this header needed for copy()
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;

    copy(arr+2,arr+n,arr);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<' ';
    }


    return 0;
}
