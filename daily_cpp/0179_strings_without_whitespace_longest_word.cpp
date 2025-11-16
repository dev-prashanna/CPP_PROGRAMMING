#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s="C++ makes problem solving fun! Level 123.";
    s.erase(remove_if(s.begin(),s.end(),[](unsigned char c){return isspace(c);}),s.end());
    istringstream input(s); string word,best; while(input>>word) if(word.size()>best.size()) best=word; cout<<best<<"\n";
    return 0;
}
