// Created on 16-Feb-24
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    //now sort the array and print
    sort(array, array + n);// sorts in ascending order
    for (int i = 0; i < n; i++) {
        cout << array[i] << ' ';
    }

    sort(array,array+n,greater<>());//sorts in descending order
    for (int i = 0; i < n; i++) {
        cout << array[i] << ' ';
    }


    return 0;
}
