#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool hiss = false;
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == s[i+1] && s[i] == 's'){
            hiss = true;
            break;
        }
    }

    if(hiss){
        cout << "hiss\n";
    }else{
        cout << "no hiss\n";
    }
}