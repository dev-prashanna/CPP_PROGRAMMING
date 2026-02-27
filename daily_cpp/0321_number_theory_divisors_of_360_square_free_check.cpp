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
    for(int x=1;x<=360;++x) if(360%x==0) a.push_back(x);
    for(int x:a){bool result=true; for(int p=2;p<=x/p;++p) if(x%(p*p)==0) result=false; cout<<x<<" "<<boolalpha<<result<<"\n";}
    return 0;
}
