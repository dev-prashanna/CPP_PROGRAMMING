#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s="C++ makes problem solving fun! Level 123.";
    for(char& c:s) c=tolower(static_cast<unsigned char>(c));
    map<char,int> counts; for(char c:s) ++counts[c]; for(char c:s) if(counts[c]==1) cout<<c; cout<<"\n";
    return 0;
}
