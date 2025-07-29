#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> a; for(int i=1;i<=15;++i) a.push_back(1LL*i*i);
    long double sum=0; for(auto x:a) sum+=(long double)x*x; cout<<fixed<<setprecision(4)<<sqrt(sum/a.size())<<"\n";
    return 0;
}
