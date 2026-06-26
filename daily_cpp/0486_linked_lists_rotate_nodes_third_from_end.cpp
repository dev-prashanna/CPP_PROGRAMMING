#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    list<int> a{4,1,1,7,2,2,5,8,3,6};
    auto middle=next(a.begin(),2); a.splice(a.end(),a,a.begin(),middle);
    if(a.size()>=3) cout<<*next(a.rbegin(),2)<<"\n";
    return 0;
}
