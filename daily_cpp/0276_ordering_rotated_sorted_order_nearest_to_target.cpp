#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{-4,7,2,7,-1,9,0,3,-6,5,2};
    sort(a.begin(),a.end()); rotate(a.begin(),a.begin()+3,a.end());
    int target=4,best=a.front(); for(int x:a) if(abs(x-target)<abs(best-target)) best=x; cout<<best<<"\n";
    return 0;
}
