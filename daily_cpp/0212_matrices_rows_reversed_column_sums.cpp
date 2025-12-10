#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> a{{2,7,1,8},{2,8,1,8},{3,1,4,1},{5,9,2,6}};
    reverse(a.begin(),a.end());
    for(size_t j=0;j<a[0].size();++j){int sum=0; for(const auto& row:a) sum+=row[j]; cout<<sum<<" ";} cout<<"\n";
    return 0;
}
