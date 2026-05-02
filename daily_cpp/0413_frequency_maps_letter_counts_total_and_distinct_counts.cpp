#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    string text="datastructuresandalgorithms"; for(char c:text) ++counts[string(1,c)];
    int total=0; for(const auto& p:counts) total+=p.second; cout<<total<<" "<<counts.size()<<"\n";
    return 0;
}
