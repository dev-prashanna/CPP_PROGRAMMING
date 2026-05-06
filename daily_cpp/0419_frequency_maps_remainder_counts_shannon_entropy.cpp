#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    vector<int> numbers{3,7,12,15,21,8,9,17,22,30,4}; for(int x:numbers) ++counts[to_string(x%5)];
    double total=0,entropy=0; for(const auto& p:counts) total+=p.second; for(const auto& entry:counts){double p=entry.second/total; entropy-=p*log2(p);} cout<<fixed<<setprecision(6)<<entropy<<"\n";
    return 0;
}
