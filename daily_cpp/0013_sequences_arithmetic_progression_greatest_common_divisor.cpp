#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> a; for(int i=0;i<20;++i) a.push_back(3+4*i);
    long long result=0; for(auto x:a) result=gcd(result,x); cout<<result<<"\n";
    return 0;
}
