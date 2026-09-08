#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=7; vector<pair<int,int>> edges{{0,1},{0,2},{1,2},{1,3},{2,4},{3,4},{3,5},{4,6},{5,6}};
    vector<vector<int>> adj(n); for(auto e:edges){adj[e.first].push_back(e.second);adj[e.second].push_back(e.first);} for(int u=0;u<n;++u){cout<<u<<":";for(int v:adj[u]) cout<<" "<<v;cout<<"\n";}
    return 0;
}
