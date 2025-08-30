#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{3,1,4,1,5,9,2,6,5,3};
    sort(a.begin(),a.end());
    long long product=1; for(int x:a) product*=x; cout<<product<<"\n";
    return 0;
}
