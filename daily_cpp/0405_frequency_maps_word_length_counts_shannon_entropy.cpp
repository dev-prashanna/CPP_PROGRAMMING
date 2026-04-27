#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    vector<string> words{"a","tree","code","graph","data","algorithms","map","set","queue"}; for(const auto& word:words) ++counts[to_string(word.size())];
    double total=0,entropy=0; for(const auto& p:counts) total+=p.second; for(const auto& entry:counts){double p=entry.second/total; entropy-=p*log2(p);} cout<<fixed<<setprecision(6)<<entropy<<"\n";
    return 0;
}
