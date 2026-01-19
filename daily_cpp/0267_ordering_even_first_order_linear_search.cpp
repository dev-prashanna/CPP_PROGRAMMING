#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{-4,7,2,7,-1,9,0,3,-6,5,2};
    stable_sort(a.begin(),a.end(),[](int x,int y){int px=abs(x%2),py=abs(y%2);return px!=py?px<py:x<y;});
    for(int x:a) cout<<x<<" "; cout<<"\n"; auto p=find(a.begin(),a.end(),7); cout<<(p==a.end()?-1:distance(a.begin(),p))<<"\n";
    return 0;
}
