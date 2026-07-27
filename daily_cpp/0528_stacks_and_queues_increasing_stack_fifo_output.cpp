#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{4,-2,7,7,1,-3,5,5,2,8,6};
    vector<int> pending; for(int x:a){while(!pending.empty()&&pending.back()>x) pending.pop_back();pending.push_back(x);} a=pending;
    queue<int> pending; for(int x:a) pending.push(x); while(!pending.empty()){cout<<pending.front()<<" ";pending.pop();} cout<<"\n";
    return 0;
}
