#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if(x<2) return false;
    for(int d=2;d<=x/d;++d) if(x%d==0) return false;
    return true;
}
int divisorSum(int x) {
    int sum=0;
    for(int d=1;d<=x/d;++d) if(x%d==0) {
        sum+=d;
        if(d!=x/d) sum+=x/d;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a;
    for(int x=4;x<=40;++x) if(!isPrime(x)) a.push_back(x);
    for(int x:a){int n=x; cout<<x<<":"; for(int p=2;p<=n/p;++p) while(n%p==0){cout<<" "<<p;n/=p;} if(n>1) cout<<" "<<n; cout<<"\n";}
    return 0;
}
