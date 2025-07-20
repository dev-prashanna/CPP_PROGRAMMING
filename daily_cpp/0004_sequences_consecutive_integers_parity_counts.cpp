#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> a; for(int i=1;i<=20;++i) a.push_back(i);
    int even=0,odd=0; for(auto x:a) (x%2==0?even:odd)++; cout<<even<<" "<<odd<<"\n";
    return 0;
}
