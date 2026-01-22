#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{-4,7,2,7,-1,9,0,3,-6,5,2};
    stable_sort(a.begin(),a.end(),[](int x,int y){int px=abs(x%2),py=abs(y%2);return px!=py?px<py:x<y;});
    set<pair<int,int>> pairs; set<int> seen; for(int x:a){if(seen.count(12-x)) pairs.insert(minmax(x,12-x));seen.insert(x);} for(auto p:pairs) cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}
