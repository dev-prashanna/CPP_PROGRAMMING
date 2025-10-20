#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{-8,3,0,5,-2,3,9,-4,6,1,0,7,-1,4};
    a.erase(remove(a.begin(),a.end(),0),a.end());
    if(a.size()<2) return 0; int left=a[0],right=a[1]; for(size_t i=0;i<a.size();++i) for(size_t j=i+1;j<a.size();++j) if(abs(a[i]+a[j])<abs(left+right)){left=a[i];right=a[j];} cout<<left<<" "<<right<<" "<<left+right<<"\n";
    return 0;
}
