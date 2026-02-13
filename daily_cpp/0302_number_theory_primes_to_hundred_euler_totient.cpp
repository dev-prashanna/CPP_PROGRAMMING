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
    for(int x=2;x<=100;++x) if(isPrime(x)) a.push_back(x);
    for(int x:a){int n=x,result=x; for(int p=2;p<=n/p;++p) if(n%p==0){while(n%p==0) n/=p;result-=result/p;} if(n>1) result-=result/n; cout<<x<<" "<<result<<"\n";}
    return 0;
}
