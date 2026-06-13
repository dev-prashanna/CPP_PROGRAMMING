#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    list<int> a{4,1,1,7,2,2,5,8,3,6};
    a.reverse();
    auto previous=a.begin(); for(auto p=next(a.begin());p!=a.end();++p,++previous) cout<<*p-*previous<<" "; cout<<"\n";
    return 0;
}
