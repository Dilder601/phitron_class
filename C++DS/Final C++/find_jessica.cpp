#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string word;
    stringstream ss(s);
    int flag = 0;
    while (ss >> word) {
        if (word == "Jessica") {
            flag = 1;
        }
    }

    if (flag) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}