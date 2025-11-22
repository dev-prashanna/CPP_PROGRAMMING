#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s="C++ makes problem solving fun! Level 123.";
    for(char& c:s){if(c>='a'&&c<='z') c='a'+(c-'a'+3)%26; else if(c>='A'&&c<='Z') c='A'+(c-'A'+3)%26;}
    int vowels=0,consonants=0; for(unsigned char c:s) if(isalpha(c)){char lower=tolower(c); if(string("aeiou").find(lower)!=string::npos) ++vowels; else ++consonants;} cout<<vowels<<" "<<consonants<<"\n";
    return 0;
}
