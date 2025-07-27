#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> a; for(int i=1;i<=15;++i) a.push_back(1LL*i*i);
    auto p=minmax_element(a.begin(),a.end()); cout<<*p.first<<" "<<*p.second<<"\n";
    return 0;
}
