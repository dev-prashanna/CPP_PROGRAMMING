#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> a{{2,7,1,8},{2,8,1,8},{3,1,4,1},{5,9,2,6}};
    for(size_t i=0;i<a.size();++i) for(size_t j=i+1;j<a.size();++j) swap(a[i][j],a[j][i]); for(auto& row:a) reverse(row.begin(),row.end());
    int n=a.size(),m=a[0].size(); vector<vector<int>> p(n+1,vector<int>(m+1)); for(int i=0;i<n;++i) for(int j=0;j<m;++j) p[i+1][j+1]=a[i][j]+p[i][j+1]+p[i+1][j]-p[i][j]; int r1=1,c1=1,r2=3,c2=2; cout<<p[r2+1][c2+1]-p[r1][c2+1]-p[r2+1][c1]+p[r1][c1]<<"\n";
    return 0;
}
