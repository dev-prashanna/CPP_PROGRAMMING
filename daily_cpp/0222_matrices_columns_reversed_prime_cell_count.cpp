#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> a{{2,7,1,8},{2,8,1,8},{3,1,4,1},{5,9,2,6}};
    for(auto& row:a) reverse(row.begin(),row.end());
    int count=0; for(const auto& row:a) for(int x:row){bool prime=x>=2; for(int d=2;d*d<=x;++d) if(x%d==0) prime=false; count+=prime;} cout<<count<<"\n";
    return 0;
}
