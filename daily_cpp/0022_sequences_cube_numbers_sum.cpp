#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> a; for(int i=1;i<=12;++i) a.push_back(1LL*i*i*i);
    cout<<accumulate(a.begin(),a.end(),0LL)<<"\n";
    return 0;
}
