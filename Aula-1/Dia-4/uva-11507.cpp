#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    map<string, map<string, string>> m;
    m["+x"]["+y"] = "+y";
    m["+x"]["-y"] = "-y";
    m["+x"]["+z"] = "+z";
    m["+x"]["-z"] = "-z";
    m["-x"]["+y"] = "-y";
    m["-x"]["-y"] = "+y";
    m["-x"]["+z"] = "-z";
    m["-x"]["-z"] = "+z";
    m["+y"]["+y"] = "-x";
    m["+y"]["-y"] = "+x";
    m["+y"]["+z"] = "+y";
    m["+y"]["-z"] = "+y";
    m["-y"]["+y"] = "+x";
    m["-y"]["-y"] = "-x";
    m["-y"]["+z"] = "-y";
    m["-y"]["-z"] = "-y";
    m["+z"]["+y"] = "+z";
    m["+z"]["-y"] = "+z";
    m["+z"]["+z"] = "-x";
    m["+z"]["-z"] = "+x";
    m["-z"]["+y"] = "-z";
    m["-z"]["-y"] = "-z";
    m["-z"]["+z"] = "+x";
    m["-z"]["-z"] = "-x";

    int l;
    while(true){
        cin >> l;
        if(l == 0){
            break;
        }

        string dir = "+x";
        string s;
        for(int i = 1; i < l; i++){
            cin >> s;

            if(s == "No"){
                continue;
            }

            dir = m[dir][s];
        }
        cout << dir << "\n";
    }
}