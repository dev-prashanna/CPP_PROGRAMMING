#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    vector<string> names{"Ada","Alan","Grace","Guido","Barbara","Bjarne","Dennis","Donald"}; for(const auto& name:names) ++counts[name.substr(0,1)];
    int total=0; for(const auto& p:counts) total+=p.second; cout<<total<<" "<<counts.size()<<"\n";
    return 0;
}
