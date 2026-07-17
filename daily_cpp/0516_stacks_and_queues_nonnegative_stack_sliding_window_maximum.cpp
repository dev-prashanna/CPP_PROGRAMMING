#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{4,-2,7,7,1,-3,5,5,2,8,6};
    stack<int> pending; for(int x:a) if(x>=0) pending.push(x); a.clear(); while(!pending.empty()){a.push_back(pending.top());pending.pop();} reverse(a.begin(),a.end());
    deque<int> pending; int k=3; for(int i=0;i<(int)a.size();++i){while(!pending.empty()&&pending.front()<=i-k) pending.pop_front();while(!pending.empty()&&a[pending.back()]<=a[i]) pending.pop_back();pending.push_back(i);if(i>=k-1) cout<<a[pending.front()]<<" ";} cout<<"\n";
    return 0;
}
