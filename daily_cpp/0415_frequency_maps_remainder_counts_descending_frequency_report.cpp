#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    vector<int> numbers{3,7,12,15,21,8,9,17,22,30,4}; for(int x:numbers) ++counts[to_string(x%5)];
    vector<pair<string,int>> entries(counts.begin(),counts.end()); sort(entries.begin(),entries.end(),[](const auto& x,const auto& y){return x.second!=y.second?x.second>y.second:x.first<y.first;}); for(const auto& p:entries) cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}
