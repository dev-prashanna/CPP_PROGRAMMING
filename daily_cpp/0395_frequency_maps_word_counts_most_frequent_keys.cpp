#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    istringstream input("red blue red green blue red yellow green"); string word; while(input>>word) ++counts[word];
    int best=0; for(const auto& p:counts) best=max(best,p.second); for(const auto& p:counts) if(p.second==best) cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}
