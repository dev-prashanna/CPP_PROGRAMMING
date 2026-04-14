#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> a{1,2,3,5,8,13,21},b{2,3,4,6,8,12,20}; vector<int> values;
    for(int x=1;x<=24;++x) if(!a.count(x)) values.push_back(x);
    if(values.size()<2) cout<<"none\n"; else{int best=INT_MAX; for(size_t i=1;i<values.size();++i) best=min(best,values[i]-values[i-1]); cout<<best<<"\n";}
    return 0;
}
