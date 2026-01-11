#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{-4,7,2,7,-1,9,0,3,-6,5,2};
    sort(a.rbegin(),a.rend());
    set<int> seen; for(int x:a) if(seen.insert(x).second) cout<<x<<" "; cout<<"\n";
    return 0;
}
