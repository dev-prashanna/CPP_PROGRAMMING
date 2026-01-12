#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{-4,7,2,7,-1,9,0,3,-6,5,2};
    sort(a.rbegin(),a.rend());
    nth_element(a.begin(),a.begin()+2,a.end()); cout<<a[2]<<"\n";
    return 0;
}
