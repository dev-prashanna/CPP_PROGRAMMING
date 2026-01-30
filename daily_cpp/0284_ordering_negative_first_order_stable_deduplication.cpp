#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{-4,7,2,7,-1,9,0,3,-6,5,2};
    stable_partition(a.begin(),a.end(),[](int x){return x<0;});
    set<int> seen; for(int x:a) if(seen.insert(x).second) cout<<x<<" "; cout<<"\n";
    return 0;
}
