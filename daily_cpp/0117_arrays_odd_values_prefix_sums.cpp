#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{-8,3,0,5,-2,3,9,-4,6,1,0,7,-1,4};
    a.erase(remove_if(a.begin(),a.end(),[](int x){return x%2==0;}),a.end());
    int sum=0; for(int x:a){sum+=x; cout<<sum<<" ";} cout<<"\n";
    return 0;
}
