// Bismillahir Rahmanir Raheem
// Created: 12 Oct 2025
// Author: zbi
// https://youkn0wwho.academy/topic-list/bitwise_operations

#include <bits/stdc++.h>

using namespace std;

#define faster                                                                                     \
    ios_base::sync_with_stdio(false);                                                              \
    cin.tie(NULL)
#define getUnique(v)                                                                               \
    {                                                                                              \
        sort(v.begin(), v.end());                                                                  \
        v.erase(unique(v.begin(), v.end()), v.end());                                              \
    }
#define nl "\n"

typedef long long      ll;
typedef vector<int>    vi;
typedef vector<ll>     vl;
typedef pair<int, int> pii;
typedef pair<ll, ll>   pll;

int main() {
    // Bitwise operators
    // and = &, or = |, xor = ^ , compliment = ~
    int a = 5, b = 9; // 0101, 1001 in binary
    // each bit in the number is used int the operation
    // tips you can convert and print a number in binary with this next line
    cout << bitset<8>(a) << nl;
    cout << bitset<8>(b) << nl;
    cout << nl;
    // returns which bits have 1s in common position. 0101&1001 = 0001
    cout << bitset<8>(a & b) << nl;

    cout << bitset<8>(a | b) << nl;
    cout << bitset<8>(a ^ b) << nl;
    cout << ~a << " " << ~~b << nl; // doble compliment == original number

    // << left shift denotes all bits are shift to left
    // i.e 5 = 0101 << 1 will result 1010 which is 10
    // so left shift once doubles a number.
    // n.2^k, here k is shift count

    // Shift Left Operation
    cout << "\n Shift Left:" << endl;
    // Using for loop for shifting num left from 0 bit to 3 bits
    for (int i = 0; i < 4; i++) {
        cout << "1024 << " << i << " = " << (1024 << i) << endl;
    }

    // << right shift denotes all bits are shift to right
    // i.e 5 = 0101 >> 1 will result 0010 which is 2.
    // so right shift halves a number. int division for odds
    // n/2^k, here k is shift count

    // Shift right Operation
    cout << "Shift Right:" << endl;
    // Using for loop for shifting num right from 0 bit to 3 bits
    for (int i = 0; i < 4; i++) {
        cout << "1024 >> " << i << " = " << (1024 >> i) << endl;
    }

    // note: shifting actually doesnt change the original variable value
    // it doesnt work like an operator rather like a function
    int num = 100;
    cout << (num << 2) << nl;
    cout << num << nl;

    int x = 45; // 00101101
    // this prints position of the bits that are 1 in the bin representaion of x
    for (int i = 0; i < 30; i++)
        if ((x & (1 << i)) != 0)
            cout << i << " ";

    // bit mask very useful for generating subsets.
    //  n values in a set has 2^n subsets.
    //  can be so for the value 101 , we take the 1st and 3rd elements in the set
    //  like this subsets can be calculated easily
    //  it is known as bit masking
    //  masking examle in other file

    // this counts num of 1s in a binary(x)
    cout << __builtin_popcount(9) << nl; // 9=1001 so output is 2
    cout << __builtin_parity(9) << nl;   // checks even odd; 1 for odd,0 for even
    // this is also a simple parity check. checks the first/rightmost bit. 1 for odd, 0 for even
    cout << (1 & 9) << " and " << (1 & 6) << nl;

    // for bitsets theres the .count() works the same as popcount, counts 1
    cout << bitset<8>(9).count() << nl; // 2

    // bitsets can be used to convert ints or strings into binary;
    bitset<8> bx("1010"), by(9);
    cout << bx << " " << by << nl;

    return 0;
}