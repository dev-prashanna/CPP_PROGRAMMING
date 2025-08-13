#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> a{0,1}; while(a.size()<20) a.push_back(a[a.size()-1]+a[a.size()-2]);
    long double sum=0; for(auto x:a) sum+=(long double)x*x; cout<<fixed<<setprecision(4)<<sqrt(sum/a.size())<<"\n";
    return 0;
}
