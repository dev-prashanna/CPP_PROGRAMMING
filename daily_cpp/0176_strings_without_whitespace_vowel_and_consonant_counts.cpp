#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s="C++ makes problem solving fun! Level 123.";
    s.erase(remove_if(s.begin(),s.end(),[](unsigned char c){return isspace(c);}),s.end());
    int vowels=0,consonants=0; for(unsigned char c:s) if(isalpha(c)){char lower=tolower(c); if(string("aeiou").find(lower)!=string::npos) ++vowels; else ++consonants;} cout<<vowels<<" "<<consonants<<"\n";
    return 0;
}
