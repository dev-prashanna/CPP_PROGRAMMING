#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> a{1,2,3,5,8,13,21},b{2,3,4,6,8,12,20}; vector<int> values;
    set_intersection(a.begin(),a.end(),b.begin(),b.end(),back_inserter(values));
    set<int> selected(values.begin(),values.end()); for(int x:values) if(x<12-x&&selected.count(12-x)) cout<<x<<" "<<12-x<<"\n";
    return 0;
}
