#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{3,1,4,1,5,9,2,6,5,3};
    vector<int> b; set<int> seen; for(int x:a) if(seen.insert(x).second) b.push_back(x); a=b;
    for(size_t i=1;i<a.size();++i) cout<<abs(a[i]-a[i-1])<<" "; cout<<"\n";
    return 0;
}
