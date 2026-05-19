#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    vector<string> names{"Ada","Alan","Grace","Guido","Barbara","Bjarne","Dennis","Donald"}; for(const auto& name:names) ++counts[name.substr(0,1)];
    vector<pair<string,int>> entries(counts.begin(),counts.end()); sort(entries.begin(),entries.end(),[](const auto& x,const auto& y){return x.second!=y.second?x.second>y.second:x.first<y.first;}); for(const auto& p:entries) cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}
