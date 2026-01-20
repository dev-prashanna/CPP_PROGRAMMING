#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{-4,7,2,7,-1,9,0,3,-6,5,2};
    stable_sort(a.begin(),a.end(),[](int x,int y){int px=abs(x%2),py=abs(y%2);return px!=py?px<py:x<y;});
    int first=-1,last=-1; for(int i=0;i<(int)a.size();++i) if(a[i]==2){if(first==-1) first=i;last=i;} cout<<first<<" "<<last<<"\n";
    return 0;
}
