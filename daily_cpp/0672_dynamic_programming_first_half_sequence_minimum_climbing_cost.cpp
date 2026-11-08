#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{1,4,2,6,3,5,2,7};
    a.resize(a.size()/2);
    int beforePrevious=0,previous=0;for(size_t i=2;i<=a.size();++i){int current=min(previous+a[i-1],beforePrevious+a[i-2]);beforePrevious=previous;previous=current;}cout<<previous<<"\n";
    return 0;
}
