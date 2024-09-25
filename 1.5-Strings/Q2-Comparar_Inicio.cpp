#include <bits/stdc++.h>

using namespace std;

int main(){
    string cat = "", s;
    while(true){
        getline(cin, s);
        cout << s << "\n";
        if(s.substr(0, 7) == "......."){
            break;
        }
        s.push_back(' ');
        cat += s;
    }

    cout << cat << "\n";
}