#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    istringstream input("red blue red green blue red yellow green"); string word; while(input>>word) ++counts[word];
    for(const auto& p:counts) cout<<p.first<<" "<<string(p.second,'*')<<"\n";
    return 0;
}
