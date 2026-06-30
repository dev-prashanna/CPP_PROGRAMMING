#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{4,-2,7,7,1,-3,5,5,2,8,6};
    int best=INT_MAX; for(int x:a){best=min(best,x);cout<<best<<" ";} cout<<"\n";
    return 0;
}
