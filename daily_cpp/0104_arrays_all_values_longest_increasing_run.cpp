#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{-8,3,0,5,-2,3,9,-4,6,1,0,7,-1,4};
    int best=0,current=0; for(size_t i=0;i<a.size();++i){current=(i>0&&a[i]>a[i-1])?current+1:1; best=max(best,current);} cout<<best<<"\n";
    return 0;
}
