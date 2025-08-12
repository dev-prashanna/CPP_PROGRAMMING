#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> a{0,1}; while(a.size()<20) a.push_back(a[a.size()-1]+a[a.size()-2]);
    double mean=accumulate(a.begin(),a.end(),0.0)/a.size(), variance=0; for(auto x:a) variance+=(x-mean)*(x-mean); cout<<fixed<<setprecision(4)<<mean<<" "<<variance/a.size()<<"\n";
    return 0;
}
