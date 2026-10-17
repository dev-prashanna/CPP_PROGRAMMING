#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{1,4,2,6,3,5,2,7};
    int target=10;vector<int> dp(target+1,target+1);dp[0]=0;for(int sum=1;sum<=target;++sum) for(int coin:a) if(coin<=sum) dp[sum]=min(dp[sum],dp[sum-coin]+1);cout<<(dp[target]>target?-1:dp[target])<<"\n";
    return 0;
}
