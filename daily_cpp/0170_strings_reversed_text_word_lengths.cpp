#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s="C++ makes problem solving fun! Level 123.";
    reverse(s.begin(),s.end());
    istringstream input(s); string word; while(input>>word) cout<<word<<" "<<word.size()<<"\n";
    return 0;
}
