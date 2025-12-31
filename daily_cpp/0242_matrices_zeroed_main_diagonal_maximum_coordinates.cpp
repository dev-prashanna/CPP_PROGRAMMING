#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> a{{2,7,1,8},{2,8,1,8},{3,1,4,1},{5,9,2,6}};
    for(size_t i=0;i<a.size();++i) a[i][i]=0;
    int value=a[0][0]; size_t r=0,c=0; for(size_t i=0;i<a.size();++i) for(size_t j=0;j<a[i].size();++j) if(a[i][j]>value){value=a[i][j];r=i;c=j;} cout<<value<<" "<<r<<" "<<c<<"\n";
    return 0;
}
