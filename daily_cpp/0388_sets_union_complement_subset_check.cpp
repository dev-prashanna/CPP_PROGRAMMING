#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> a{1,2,3,5,8,13,21},b{2,3,4,6,8,12,20}; vector<int> values;
    for(int x=1;x<=24;++x) if(!a.count(x)&&!b.count(x)) values.push_back(x);
    vector<int> wanted{2,3}; cout<<boolalpha<<includes(values.begin(),values.end(),wanted.begin(),wanted.end())<<"\n";
    return 0;
}
