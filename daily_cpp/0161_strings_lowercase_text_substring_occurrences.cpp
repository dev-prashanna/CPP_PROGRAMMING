#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s="C++ makes problem solving fun! Level 123.";
    for(char& c:s) c=tolower(static_cast<unsigned char>(c));
    string target="ing"; vector<size_t> positions; for(size_t p=s.find(target);p!=string::npos;p=s.find(target,p+1)) positions.push_back(p); cout<<positions.size()<<"\n"; for(auto p:positions) cout<<p<<" "; cout<<"\n";
    return 0;
}
