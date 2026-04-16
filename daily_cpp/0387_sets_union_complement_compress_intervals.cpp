#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> a{1,2,3,5,8,13,21},b{2,3,4,6,8,12,20}; vector<int> values;
    for(int x=1;x<=24;++x) if(!a.count(x)&&!b.count(x)) values.push_back(x);
    for(size_t i=0;i<values.size();){size_t j=i; while(j+1<values.size()&&values[j+1]==values[j]+1) ++j; cout<<values[i]<<"-"<<values[j]<<"\n"; i=j+1;}
    return 0;
}
