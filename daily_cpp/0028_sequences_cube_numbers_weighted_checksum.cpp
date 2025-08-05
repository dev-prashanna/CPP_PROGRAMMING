#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> a; for(int i=1;i<=12;++i) a.push_back(1LL*i*i*i);
    long long result=0; for(size_t i=0;i<a.size();++i) result=(result+(i+1)*a[i])%1000000007; cout<<result<<"\n";
    return 0;
}
