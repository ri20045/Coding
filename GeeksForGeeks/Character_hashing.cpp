#include<bits/stdc++.h>
using namespace std;
//Character hashing
//a = 97 to z = 122
int main(){

string s;
cin >> s;

int hash[26] = {0};
for(int i=0;i<s.size();i++){
    hash[s[i] - 'a']++;
}
int q;
cin >> q;
while(q--){
    char c;
    cin >> c;
    cout << hash[c-'a'] << "\n";
}
    return 0;
}
