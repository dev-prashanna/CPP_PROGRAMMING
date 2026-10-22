#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{1,4,2,6,3,5,2,7};
    sort(a.begin(),a.end());a.erase(unique(a.begin(),a.end()),a.end());
    int target=10;vector<long long> dp(target+1);dp[0]=1;for(int x:a) for(int sum=target;sum>=x;--sum) dp[sum]+=dp[sum-x];cout<<dp[target]<<"\n";
    return 0;
}
