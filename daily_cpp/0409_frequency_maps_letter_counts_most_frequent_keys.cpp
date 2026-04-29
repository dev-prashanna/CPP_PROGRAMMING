#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    string text="datastructuresandalgorithms"; for(char c:text) ++counts[string(1,c)];
    int best=0; for(const auto& p:counts) best=max(best,p.second); for(const auto& p:counts) if(p.second==best) cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}
