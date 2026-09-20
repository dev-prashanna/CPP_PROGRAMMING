#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=7; vector<pair<int,int>> edges{{0,1},{0,2},{1,2},{1,3},{2,4},{3,4},{3,5},{4,6},{5,6}};
    edges.erase(remove_if(edges.begin(),edges.end(),[](auto e){return e.first%2!=e.second%2;}),edges.end());
    vector<vector<int>> adj(n); for(auto e:edges){adj[e.first].push_back(e.second);adj[e.second].push_back(e.first);} vector<bool> seen(n); int components=0; function<void(int)> dfs=[&](int u){seen[u]=true;for(int v:adj[u]) if(!seen[v]) dfs(v);}; for(int u=0;u<n;++u) if(!seen[u]){++components;dfs(u);} cout<<components<<"\n";
    return 0;
}
