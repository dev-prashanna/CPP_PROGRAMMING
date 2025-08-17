#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> a; for(int i=0;i<20;++i) a.push_back(1LL<<i);
    int even=0,odd=0; for(auto x:a) (x%2==0?even:odd)++; cout<<even<<" "<<odd<<"\n";
    return 0;
}
