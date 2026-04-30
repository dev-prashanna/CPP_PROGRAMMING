#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    string text="datastructuresandalgorithms"; for(char c:text) ++counts[string(1,c)];
    for(const auto& p:counts) if(p.second==1) cout<<p.first<<"\n";
    return 0;
}
