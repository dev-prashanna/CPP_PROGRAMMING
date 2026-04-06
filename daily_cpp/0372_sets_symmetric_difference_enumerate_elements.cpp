#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> a{1,2,3,5,8,13,21},b{2,3,4,6,8,12,20}; vector<int> values;
    set_symmetric_difference(a.begin(),a.end(),b.begin(),b.end(),back_inserter(values));
    for(int x:values) cout<<x<<" "; cout<<"\n";
    return 0;
}
