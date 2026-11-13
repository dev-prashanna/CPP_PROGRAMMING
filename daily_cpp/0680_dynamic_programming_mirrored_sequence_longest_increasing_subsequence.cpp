#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{1,4,2,6,3,5,2,7};
    vector<int> reversed(a.rbegin(),a.rend());a.insert(a.end(),reversed.begin(),reversed.end());
    vector<int> tails;for(int x:a){auto p=lower_bound(tails.begin(),tails.end(),x);if(p==tails.end()) tails.push_back(x);else *p=x;}cout<<tails.size()<<"\n";
    return 0;
}
