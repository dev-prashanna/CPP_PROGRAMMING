#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    istringstream input("red blue red green blue red yellow green"); string word; while(input>>word) ++counts[word];
    int total=0; for(const auto& p:counts) total+=p.second; cout<<total<<" "<<counts.size()<<"\n";
    return 0;
}
