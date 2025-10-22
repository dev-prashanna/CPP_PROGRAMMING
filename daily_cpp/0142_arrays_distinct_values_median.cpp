#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{-8,3,0,5,-2,3,9,-4,6,1,0,7,-1,4};
    set<int> seen; vector<int> b; for(int x:a) if(seen.insert(x).second) b.push_back(x); a=b;
    if(a.empty()) return 0; sort(a.begin(),a.end()); size_t n=a.size(); double value=n%2?a[n/2]:(a[n/2-1]+a[n/2])/2.0; cout<<value<<"\n";
    return 0;
}
