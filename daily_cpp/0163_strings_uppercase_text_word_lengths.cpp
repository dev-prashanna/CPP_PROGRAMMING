#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s="C++ makes problem solving fun! Level 123.";
    for(char& c:s) c=toupper(static_cast<unsigned char>(c));
    istringstream input(s); string word; while(input>>word) cout<<word<<" "<<word.size()<<"\n";
    return 0;
}
