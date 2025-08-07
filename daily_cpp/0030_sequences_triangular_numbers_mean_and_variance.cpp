#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> a; for(int i=1;i<=20;++i) a.push_back(1LL*i*(i+1)/2);
    double mean=accumulate(a.begin(),a.end(),0.0)/a.size(), variance=0; for(auto x:a) variance+=(x-mean)*(x-mean); cout<<fixed<<setprecision(4)<<mean<<" "<<variance/a.size()<<"\n";
    return 0;
}
