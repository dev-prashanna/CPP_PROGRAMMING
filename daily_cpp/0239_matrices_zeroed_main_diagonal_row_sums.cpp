#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> a{{2,7,1,8},{2,8,1,8},{3,1,4,1},{5,9,2,6}};
    for(size_t i=0;i<a.size();++i) a[i][i]=0;
    for(const auto& row:a) cout<<accumulate(row.begin(),row.end(),0)<<" "; cout<<"\n";
    return 0;
}
