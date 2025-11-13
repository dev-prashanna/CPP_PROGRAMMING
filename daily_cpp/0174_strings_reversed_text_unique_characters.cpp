#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s="C++ makes problem solving fun! Level 123.";
    reverse(s.begin(),s.end());
    map<char,int> counts; for(char c:s) ++counts[c]; for(char c:s) if(counts[c]==1) cout<<c; cout<<"\n";
    return 0;
}
