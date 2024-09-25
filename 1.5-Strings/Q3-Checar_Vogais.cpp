#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    map<char,int> m = {
        {'a', 1}, 
        {'e', 1},  
        {'i', 1},  
        {'o', 1},  
        {'u', 1}  
    };

    int digs = 0, vogs = 0, cons = 0;
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
        if(isdigit(s[i])){
            digs++;
        }else if(m[s[i]] == 1){
            vogs++;
        }else{
            cons++;
        }
    }

    cout << s << "\n";
    cout << digs << " " << vogs << " " << cons << "\n";
}