#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> counts;
    vector<int> numbers{12,18,20,45,49}; for(int x:numbers){for(int p=2;p<=x/p;++p) while(x%p==0){++counts[to_string(p)];x/=p;} if(x>1) ++counts[to_string(x)];}
    vector<pair<string,int>> entries(counts.begin(),counts.end()); sort(entries.begin(),entries.end(),[](const auto& x,const auto& y){return x.second!=y.second?x.second>y.second:x.first<y.first;}); for(const auto& p:entries) cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}
