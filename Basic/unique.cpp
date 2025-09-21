// Created on 02-Sep-25
//
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 3, 3, 10, 1, 2, 3, 7, 7, 8};
    for (int u: v) cout << u << " ";
    cout << endl;

    // unique accepts iterator as argument and transforms the container
    //so that it REMOVES CONSECUTIVE DUPLICATES
    //so only unique values remain
    //also it returns the last iter where it stopped
    //Important : Doesn't remove duplicates if not consecutive
    // So to get unique values in a container
    // we need to sort first, to make duplicates consecutive


    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    //now that rest of the values other than uniques are undefined
    // so resize
    // v.resize(distance(v.begin(), it));

    //erase works too
    v.erase(it, v.end());

    //now only the uniques remain
    for (int u: v) cout << u << " ";
    cout << endl;

    return 0;
}
