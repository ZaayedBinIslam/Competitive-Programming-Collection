// Created on 20-Feb-24
//
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int onOff(int sum) {
    if (sum % 2 == 0)
        return 1;
    else return 0;
}

int main() {
    int arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    cout << onOff(arr[0][0] + arr[0][1] + arr[1][0]);
    cout << onOff(arr[0][0] + arr[0][1] + arr[0][2] + arr[1][1]);
    cout << onOff(arr[0][1] + arr[0][2] + arr[1][2]) << endl;
    cout << onOff(arr[0][0] + arr[1][0] + arr[2][0] + arr[1][1]);
    cout << onOff(arr[0][1] + arr[1][1] + arr[2][1] + arr[1][0] + arr[1][2]);
    cout << onOff(arr[0][2] + arr[1][2] + arr[2][2] + arr[1][1]) << endl;
    cout << onOff(arr[1][0] + arr[2][0] + arr[2][1]);
    cout << onOff(arr[2][0] + arr[2][1] + arr[2][2] + arr[1][1]);
    cout << onOff(arr[2][1] + arr[2][2] + arr[1][2]) << endl;

//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            int sum = 0;
//            while (i>0 && i<3 && j>0 &&j)
//        }
//    }

    //what a n on programmer like solve.:( .its probably possible with a algo.cant think rn.
    return 0;
}