#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> a{0,1}; while(a.size()<20) a.push_back(a[a.size()-1]+a[a.size()-2]);
    long long result=0; for(auto x:a) result=gcd(result,x); cout<<result<<"\n";
    return 0;
}
