#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    vector<string> names{"Ada","Alan","Grace","Guido","Barbara","Bjarne","Dennis","Donald"}; for(const auto& name:names) ++counts[name.substr(0,1)];
    double total=0,entropy=0; for(const auto& p:counts) total+=p.second; for(const auto& entry:counts){double p=entry.second/total; entropy-=p*log2(p);} cout<<fixed<<setprecision(6)<<entropy<<"\n";
    return 0;
}
