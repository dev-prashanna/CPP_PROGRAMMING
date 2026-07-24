#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{4,-2,7,7,1,-3,5,5,2,8,6};
    queue<int> pending; for(int x:a) pending.push(x); for(int i=0;i<3;++i){pending.push(pending.front());pending.pop();} a.clear(); while(!pending.empty()){a.push_back(pending.front());pending.pop();}
    vector<int> answer(a.size(),-1); stack<int> pending; for(int i=0;i<(int)a.size();++i){while(!pending.empty()&&a[pending.top()]<a[i]){answer[pending.top()]=a[i];pending.pop();} pending.push(i);} for(int x:answer) cout<<x<<" "; cout<<"\n";
    return 0;
}
