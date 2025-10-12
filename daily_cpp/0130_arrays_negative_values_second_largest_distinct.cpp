#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{-8,3,0,5,-2,3,9,-4,6,1,0,7,-1,4};
    a.erase(remove_if(a.begin(),a.end(),[](int x){return x>=0;}),a.end());
    set<int> values(a.begin(),a.end()); if(values.size()<2) cout<<"none\n"; else cout<<*next(values.rbegin())<<"\n";
    return 0;
}
