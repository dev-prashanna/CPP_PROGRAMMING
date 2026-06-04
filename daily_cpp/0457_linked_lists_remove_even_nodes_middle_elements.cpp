#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    list<int> a{4,1,1,7,2,2,5,8,3,6};
    a.remove_if([](int x){return x%2==0;});
    size_t n=a.size(); if(n%2) cout<<*next(a.begin(),n/2)<<"\n"; else cout<<*next(a.begin(),n/2-1)<<" "<<*next(a.begin(),n/2)<<"\n";
    return 0;
}
