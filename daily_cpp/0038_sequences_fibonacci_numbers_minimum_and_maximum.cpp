#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> a{0,1}; while(a.size()<20) a.push_back(a[a.size()-1]+a[a.size()-2]);
    auto p=minmax_element(a.begin(),a.end()); cout<<*p.first<<" "<<*p.second<<"\n";
    return 0;
}
