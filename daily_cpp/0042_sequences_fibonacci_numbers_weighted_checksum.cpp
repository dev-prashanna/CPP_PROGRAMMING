#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> a{0,1}; while(a.size()<20) a.push_back(a[a.size()-1]+a[a.size()-2]);
    long long result=0; for(size_t i=0;i<a.size();++i) result=(result+(i+1)*a[i])%1000000007; cout<<result<<"\n";
    return 0;
}
