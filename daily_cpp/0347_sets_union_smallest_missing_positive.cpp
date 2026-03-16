#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> a{1,2,3,5,8,13,21},b{2,3,4,6,8,12,20}; vector<int> values;
    set_union(a.begin(),a.end(),b.begin(),b.end(),back_inserter(values));
    int missing=1; for(int x:values) if(x==missing) ++missing; cout<<missing<<"\n";
    return 0;
}
