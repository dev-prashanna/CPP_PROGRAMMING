#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{3,1,4,1,5,9,2,6,5,3};
    for(int& x:a) x=9-x;
    cout<<accumulate(a.begin(),a.end(),0)<<"\n";
    return 0;
}
