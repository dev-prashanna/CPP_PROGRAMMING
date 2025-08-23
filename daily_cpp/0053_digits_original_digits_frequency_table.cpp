#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{3,1,4,1,5,9,2,6,5,3};
    array<int,10> count{}; for(int x:a) ++count[x]; for(int i=0;i<10;++i) cout<<i<<" "<<count[i]<<"\n";
    return 0;
}
