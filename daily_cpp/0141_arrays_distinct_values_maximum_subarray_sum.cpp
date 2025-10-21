#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{-8,3,0,5,-2,3,9,-4,6,1,0,7,-1,4};
    set<int> seen; vector<int> b; for(int x:a) if(seen.insert(x).second) b.push_back(x); a=b;
    if(a.empty()) return 0; int current=a[0],best=a[0]; for(size_t i=1;i<a.size();++i){current=max(a[i],current+a[i]); best=max(best,current);} cout<<best<<"\n";
    return 0;
}
