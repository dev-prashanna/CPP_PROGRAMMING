#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    list<int> a{4,1,1,7,2,2,5,8,3,6};
    a.remove_if([](int x){return x%2==0;});
    auto p=find(a.begin(),a.end(),5); cout<<(p==a.end()?-1:distance(a.begin(),p))<<"\n";
    return 0;
}
