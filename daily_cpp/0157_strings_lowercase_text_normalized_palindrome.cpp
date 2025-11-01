#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s="C++ makes problem solving fun! Level 123.";
    for(char& c:s) c=tolower(static_cast<unsigned char>(c));
    string t; for(unsigned char c:s) if(isalnum(c)) t+=tolower(c); cout<<boolalpha<<equal(t.begin(),t.end(),t.rbegin())<<"\n";
    return 0;
}
