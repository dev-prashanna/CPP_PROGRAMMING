#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    vector<int> numbers{-3,0,5,-1,7,0,-8,2,4}; for(int x:numbers) ++counts[x<0?"negative":x>0?"positive":"zero"];
    int best=0; for(const auto& p:counts) best=max(best,p.second); for(const auto& p:counts) if(p.second==best) cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}
