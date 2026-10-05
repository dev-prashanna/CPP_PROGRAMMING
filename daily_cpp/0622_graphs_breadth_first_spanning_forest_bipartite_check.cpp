#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=7; vector<pair<int,int>> edges{{0,1},{0,2},{1,2},{1,3},{2,4},{3,4},{3,5},{4,6},{5,6}};
    vector<vector<int>> original(n); for(auto e:edges){original[e.first].push_back(e.second);original[e.second].push_back(e.first);} vector<pair<int,int>> selected; vector<bool> used(n); for(int start=0;start<n;++start) if(!used[start]){queue<int> q;q.push(start);used[start]=true;while(!q.empty()){int u=q.front();q.pop();for(int v:original[u]) if(!used[v]){used[v]=true;q.push(v);selected.push_back({u,v});}}} edges=selected;
    vector<vector<int>> adj(n);for(auto e:edges){adj[e.first].push_back(e.second);adj[e.second].push_back(e.first);}vector<int> color(n,-1);bool valid=true;for(int start=0;start<n;++start) if(color[start]==-1){queue<int> q;q.push(start);color[start]=0;while(!q.empty()){int u=q.front();q.pop();for(int v:adj[u]){if(color[v]==-1){color[v]=color[u]^1;q.push(v);}else if(color[v]==color[u]) valid=false;}}}cout<<boolalpha<<valid<<"\n";
    return 0;
}
