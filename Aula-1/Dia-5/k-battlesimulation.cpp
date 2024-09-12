#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    string s;
    cin >> s;
    int tam = s.size();

    map<char,char> m = {
        {'R', 'S'},
        {'B', 'K'},
        {'L', 'H'},
    };

    string res = "";
    for(int i = 0; i < tam; i++){
        if(i < tam-2){
            if(s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]){
                res += 'C';
                i += 2;
                continue;
            }
        }
        res += m[s[i]];
    }
    cout << res << "\n";
}