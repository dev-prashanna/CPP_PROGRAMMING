#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    list<int> a{4,1,1,7,2,2,5,8,3,6};
    a.push_front(9); a.push_back(0);
    cout<<accumulate(a.begin(),a.end(),0)<<"\n";
    return 0;
}
