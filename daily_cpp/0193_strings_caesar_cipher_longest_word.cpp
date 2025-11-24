#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s="C++ makes problem solving fun! Level 123.";
    for(char& c:s){if(c>='a'&&c<='z') c='a'+(c-'a'+3)%26; else if(c>='A'&&c<='Z') c='A'+(c-'A'+3)%26;}
    istringstream input(s); string word,best; while(input>>word) if(word.size()>best.size()) best=word; cout<<best<<"\n";
    return 0;
}
