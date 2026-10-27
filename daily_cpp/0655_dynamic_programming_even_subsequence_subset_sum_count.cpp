#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a{1,4,2,6,3,5,2,7};
    a.erase(remove_if(a.begin(),a.end(),[](int x){return x%2!=0;}),a.end());
    int target=10;vector<long long> dp(target+1);dp[0]=1;for(int x:a) for(int sum=target;sum>=x;--sum) dp[sum]+=dp[sum-x];cout<<dp[target]<<"\n";
    return 0;
}
