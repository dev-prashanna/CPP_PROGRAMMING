#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=7; vector<pair<int,int>> edges{{0,1},{0,2},{1,2},{1,3},{2,4},{3,4},{3,5},{4,6},{5,6}};
    set<pair<int,int>> present(edges.begin(),edges.end()); edges.clear(); for(int u=0;u<n;++u) for(int v=u+1;v<n;++v) if(!present.count({u,v})) edges.push_back({u,v});
    vector<int> degree(n); for(auto e:edges){++degree[e.first];++degree[e.second];} for(int u=0;u<n;++u) cout<<u<<" "<<degree[u]<<"\n";cout<<*min_element(degree.begin(),degree.end())<<" "<<*max_element(degree.begin(),degree.end())<<"\n";
    return 0;
}
