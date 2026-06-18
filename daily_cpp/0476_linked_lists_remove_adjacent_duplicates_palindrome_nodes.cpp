#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    list<int> a{4,1,1,7,2,2,5,8,3,6};
    a.unique();
    cout<<boolalpha<<equal(a.begin(),a.end(),a.rbegin())<<"\n";
    return 0;
}
