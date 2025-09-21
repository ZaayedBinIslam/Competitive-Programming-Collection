// Created on 03-Sep-25
//
#include <algorithm>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    //string acts like vector<char>. its dynamic like vector,while char arr[] is static

    string s; //empty string
    s += 'a'; // s= "a"
    s += 'b'; // s= "ab"
    s += 'c'; // s= "abc"

    cout << s << endl;

    s = "Test Space In Between";
    cout << s << ". Size : " << s.size() << endl;
    cout << s[0] << s[1] << endl;
    s[0] = 'B', s[1] = 'E';
    cout << s << endl;

    string s1 = "ABC", s2 = "DEF";
    char c = ' ';
    s = s1 + c + s2; // concatenation
    cout << s << endl;

    cout << "Size : " << s.size() << endl;
    cout << s.empty() << endl; //false
    s.clear();
    cout << "Size : " << s.size() << endl;
    cout << s.empty() << endl; //true

    //iterator
    s = "ABCDEF GHIJKL";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    //for each
    for (char c: s) {
        cout << c << " ";
    }
    cout << endl;

    //comparison
    s1 = "Blue", s2 = "Blue";
    string s3 = "blue";
    if (s1 == s2) cout << "Equal" << endl;
    else cout << "Not Equal" << endl;

    //case-sensitive
    if (s1 == s3) cout << "Equal" << endl;
    else cout << "Not Equal" << endl;

    //reverse
    reverse(s.begin(), s.end());
    cout << s << endl;

    //palindrome
    string r = "rotator", tmp = r;
    reverse(tmp.begin(), tmp.end());
    if (r == tmp) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;

    //cin doesnt take space in input, so we use getline
    // cin >> s; //ab cd input will print only ab.
    // cout << s << endl;
    getline(cin, s);
    cout << s << endl;

    //but theres a problem. getline also takes the 'Enter' from
    // the previous cin buffer, causing bugs. to prevent{{{ fix it }}}

    string test;
    cin >> test;
    //this ensures all characters up to the newline are ignored.
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    getline(cin, s);
    cout << s << endl;

    return 0;
}
