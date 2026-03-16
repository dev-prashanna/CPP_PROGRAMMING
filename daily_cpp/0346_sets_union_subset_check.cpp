#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> a{1,2,3,5,8,13,21},b{2,3,4,6,8,12,20}; vector<int> values;
    set_union(a.begin(),a.end(),b.begin(),b.end(),back_inserter(values));
    vector<int> wanted{2,3}; cout<<boolalpha<<includes(values.begin(),values.end(),wanted.begin(),wanted.end())<<"\n";
    return 0;
}
