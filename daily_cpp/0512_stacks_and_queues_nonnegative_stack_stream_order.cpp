#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{4,-2,7,7,1,-3,5,5,2,8,6};
    stack<int> pending; for(int x:a) if(x>=0) pending.push(x); a.clear(); while(!pending.empty()){a.push_back(pending.top());pending.pop();} reverse(a.begin(),a.end());
    for(int x:a) cout<<x<<" "; cout<<"\n";
    return 0;
}
