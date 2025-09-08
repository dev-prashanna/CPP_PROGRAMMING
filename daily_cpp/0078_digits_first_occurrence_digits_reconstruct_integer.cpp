#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{3,1,4,1,5,9,2,6,5,3};
    vector<int> b; set<int> seen; for(int x:a) if(seen.insert(x).second) b.push_back(x); a=b;
    long long value=0; for(int x:a) value=value*10+x; cout<<value<<"\n";
    return 0;
}
