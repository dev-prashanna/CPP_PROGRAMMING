#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{1,4,2,6,3,5,2,7};
    sort(a.begin(),a.end());a.erase(unique(a.begin(),a.end()),a.end());
    int previous=0,current=0;for(int x:a){int nextValue=max(current,previous+x);previous=current;current=nextValue;}cout<<current<<"\n";
    return 0;
}
