#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> a{{2,7,1,8},{2,8,1,8},{3,1,4,1},{5,9,2,6}};
    int top=0,bottom=a.size()-1,left=0,right=a[0].size()-1; while(top<=bottom&&left<=right){for(int j=left;j<=right;++j) cout<<a[top][j]<<" "; ++top; for(int i=top;i<=bottom;++i) cout<<a[i][right]<<" "; --right; if(top<=bottom){for(int j=right;j>=left;--j) cout<<a[bottom][j]<<" "; --bottom;} if(left<=right){for(int i=bottom;i>=top;--i) cout<<a[i][left]<<" "; ++left;}} cout<<"\n";
    return 0;
}
