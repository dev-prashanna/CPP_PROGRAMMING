#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{4,-2,7,7,1,-3,5,5,2,8,6};
    queue<int> pending; for(int x:a) pending.push(x); for(int i=0;i<3;++i){pending.push(pending.front());pending.pop();} a.clear(); while(!pending.empty()){a.push_back(pending.front());pending.pop();}
    queue<int> pending; for(int x:a) pending.push(x); while(!pending.empty()){cout<<pending.front()<<" ";pending.pop();} cout<<"\n";
    return 0;
}
