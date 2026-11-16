#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{1,4,2,6,3,5,2,7};
    vector<int> reversed(a.rbegin(),a.rend());a.insert(a.end(),reversed.begin(),reversed.end());
    int total=accumulate(a.begin(),a.end(),0);if(total%2){cout<<"false\n";return 0;}vector<bool> dp(total/2+1);dp[0]=true;for(int x:a) for(int sum=total/2;sum>=x;--sum) dp[sum]=dp[sum]||dp[sum-x];cout<<boolalpha<<bool(dp[total/2])<<"\n";
    return 0;
}
