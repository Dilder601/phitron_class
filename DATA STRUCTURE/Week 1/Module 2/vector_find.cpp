#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = { 1,2,2,3,4,5,2,3,2,9,2,6 };
    auto it = find(v.begin(), v.end(), 3);
    if (it == v.end()) cout << "Not Found";
    else cout << "Found";
    return 0;
}