#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=7; vector<pair<int,int>> edges{{0,1},{0,2},{1,2},{1,3},{2,4},{3,4},{3,5},{4,6},{5,6}};
    set<pair<int,int>> present(edges.begin(),edges.end()); edges.clear(); for(int u=0;u<n;++u) for(int v=u+1;v<n;++v) if(!present.count({u,v})) edges.push_back({u,v});
    vector<int> parent(n);iota(parent.begin(),parent.end(),0);function<int(int)> findRoot=[&](int u){return parent[u]==u?u:parent[u]=findRoot(parent[u]);};bool cycle=false;for(auto e:edges){int u=findRoot(e.first),v=findRoot(e.second);if(u==v) cycle=true;else parent[u]=v;}cout<<boolalpha<<cycle<<"\n";
    return 0;
}
