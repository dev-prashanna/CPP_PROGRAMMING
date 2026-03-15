#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> a{1,2,3,5,8,13,21},b{2,3,4,6,8,12,20}; vector<int> values;
    set_union(a.begin(),a.end(),b.begin(),b.end(),back_inserter(values));
    for(size_t i=0;i<values.size();){size_t j=i; while(j+1<values.size()&&values[j+1]==values[j]+1) ++j; cout<<values[i]<<"-"<<values[j]<<"\n"; i=j+1;}
    return 0;
}
