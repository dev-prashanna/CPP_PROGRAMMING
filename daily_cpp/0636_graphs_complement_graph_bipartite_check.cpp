#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=7; vector<pair<int,int>> edges{{0,1},{0,2},{1,2},{1,3},{2,4},{3,4},{3,5},{4,6},{5,6}};
    set<pair<int,int>> present(edges.begin(),edges.end()); edges.clear(); for(int u=0;u<n;++u) for(int v=u+1;v<n;++v) if(!present.count({u,v})) edges.push_back({u,v});
    vector<vector<int>> adj(n);for(auto e:edges){adj[e.first].push_back(e.second);adj[e.second].push_back(e.first);}vector<int> color(n,-1);bool valid=true;for(int start=0;start<n;++start) if(color[start]==-1){queue<int> q;q.push(start);color[start]=0;while(!q.empty()){int u=q.front();q.pop();for(int v:adj[u]){if(color[v]==-1){color[v]=color[u]^1;q.push(v);}else if(color[v]==color[u]) valid=false;}}}cout<<boolalpha<<valid<<"\n";
    return 0;
}
