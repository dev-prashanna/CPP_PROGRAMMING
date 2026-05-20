#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    vector<string> names{"Ada","Alan","Grace","Guido","Barbara","Bjarne","Dennis","Donald"}; for(const auto& name:names) ++counts[name.substr(0,1)];
    int best=0; for(const auto& p:counts) best=max(best,p.second); for(const auto& p:counts) if(p.second==best) cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}
