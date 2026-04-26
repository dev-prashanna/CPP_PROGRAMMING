#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    vector<string> words{"a","tree","code","graph","data","algorithms","map","set","queue"}; for(const auto& word:words) ++counts[to_string(word.size())];
    for(const auto& p:counts) if(p.second==1) cout<<p.first<<"\n";
    return 0;
}
