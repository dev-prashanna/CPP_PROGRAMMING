#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s="C++ makes problem solving fun! Level 123.";
    s.erase(remove_if(s.begin(),s.end(),[](unsigned char c){return isspace(c);}),s.end());
    for(size_t i=0;i<s.size();){size_t j=i+1; while(j<s.size()&&s[j]==s[i]) ++j; cout<<s[i]<<":"<<j-i<<" "; i=j;} cout<<"\n";
    return 0;
}
