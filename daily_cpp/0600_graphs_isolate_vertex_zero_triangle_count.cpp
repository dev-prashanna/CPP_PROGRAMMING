#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=7; vector<pair<int,int>> edges{{0,1},{0,2},{1,2},{1,3},{2,4},{3,4},{3,5},{4,6},{5,6}};
    edges.erase(remove_if(edges.begin(),edges.end(),[](auto e){return e.first==0||e.second==0;}),edges.end());
    vector<vector<bool>> connected(n,vector<bool>(n)); for(auto e:edges) connected[e.first][e.second]=connected[e.second][e.first]=true; int count=0;for(int u=0;u<n;++u) for(int v=u+1;v<n;++v) for(int w=v+1;w<n;++w) if(connected[u][v]&&connected[v][w]&&connected[u][w]) ++count;cout<<count<<"\n";
    return 0;
}
