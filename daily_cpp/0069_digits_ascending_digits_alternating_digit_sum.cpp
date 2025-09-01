#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{3,1,4,1,5,9,2,6,5,3};
    sort(a.begin(),a.end());
    int result=0; for(size_t i=0;i<a.size();++i) result+=(i%2?-1:1)*a[i]; cout<<result<<"\n";
    return 0;
}
