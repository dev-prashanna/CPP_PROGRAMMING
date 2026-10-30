#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{1,4,2,6,3,5,2,7};
    a.erase(remove_if(a.begin(),a.end(),[](int x){return x%2==0;}),a.end());
    int best=INT_MIN,current=0;for(int x:a){current=max(x,current+x);best=max(best,current);}cout<<best<<"\n";
    return 0;
}
