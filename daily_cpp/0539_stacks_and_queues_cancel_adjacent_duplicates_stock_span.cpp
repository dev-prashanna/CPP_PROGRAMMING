#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{4,-2,7,7,1,-3,5,5,2,8,6};
    vector<int> pending; for(int x:a){if(!pending.empty()&&pending.back()==x) pending.pop_back();else pending.push_back(x);} a=pending;
    stack<int> pending; for(int i=0;i<(int)a.size();++i){while(!pending.empty()&&a[pending.top()]<=a[i]) pending.pop();cout<<(pending.empty()?i+1:i-pending.top())<<" ";pending.push(i);} cout<<"\n";
    return 0;
}
