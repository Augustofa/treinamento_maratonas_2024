#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string,string> m = {
        {"HELLO","ENGLISH"},
        {"HOLA","SPANISH"},
        {"HALLO","GERMAN"},
        {"BONJOUR","FRENCH"},
        {"CIAO","ITALIAN"},
        {"ZDRAVSTVUJTE","RUSSIAN"},
    };

    string s = "";
    cin >> s;
    int i = 1;
    while(s.compare("#") != 0){
        if(m[s].empty()){
            cout << "Case " << i << ": UNKNOWN" << "\n";
        }else{
            cout << "Case " << i << ": " << m[s] << "\n";

        }
        i++;
        cin >> s;
    }
}