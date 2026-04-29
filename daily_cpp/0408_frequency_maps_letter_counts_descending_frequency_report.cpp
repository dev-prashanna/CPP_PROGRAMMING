#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    string text="datastructuresandalgorithms"; for(char c:text) ++counts[string(1,c)];
    vector<pair<string,int>> entries(counts.begin(),counts.end()); sort(entries.begin(),entries.end(),[](const auto& x,const auto& y){return x.second!=y.second?x.second>y.second:x.first<y.first;}); for(const auto& p:entries) cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}
