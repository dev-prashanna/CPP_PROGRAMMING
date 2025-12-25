#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> a{{2,7,1,8},{2,8,1,8},{3,1,4,1},{5,9,2,6}};
    reverse(a.begin(),a.end()); for(auto& row:a) reverse(row.begin(),row.end());
    for(const auto& row:a) cout<<accumulate(row.begin(),row.end(),0)<<" "; cout<<"\n";
    return 0;
}
