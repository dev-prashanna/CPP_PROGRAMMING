#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> a{{2,7,1,8},{2,8,1,8},{3,1,4,1},{5,9,2,6}};
    for(size_t i=0;i<a.size();++i) for(size_t j=i+1;j<a.size();++j) swap(a[i][j],a[j][i]);
    int mainSum=0,otherSum=0; for(size_t i=0;i<a.size();++i){mainSum+=a[i][i];otherSum+=a[i][a.size()-1-i];} cout<<mainSum<<" "<<otherSum<<"\n";
    return 0;
}
