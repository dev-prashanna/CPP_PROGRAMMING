#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    vector<int> numbers{12,18,20,45,49}; for(int x:numbers){for(int p=2;p<=x/p;++p) while(x%p==0){++counts[to_string(p)];x/=p;} if(x>1) ++counts[to_string(x)];}
    for(const auto& p:counts) cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}
