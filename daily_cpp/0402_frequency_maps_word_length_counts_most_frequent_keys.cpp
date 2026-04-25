#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    vector<string> words{"a","tree","code","graph","data","algorithms","map","set","queue"}; for(const auto& word:words) ++counts[to_string(word.size())];
    int best=0; for(const auto& p:counts) best=max(best,p.second); for(const auto& p:counts) if(p.second==best) cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}
