#include <bits/stdc++.h>

using namespace std;

int main(){
    string t, p;
    getline(cin, t);
    getline(cin, p);


    bool res = false;
    for(int i = 0; i < t.size(); i++){
        if(t[i] == p[0]){
            bool found = true;
            int j;
            string s = "";
            for(j = 0; j < p.size(); j++){
                if(t[j] != p[j]){
                    found = false;
                    break;
                }
                s += t[j];
            }
            if(s.size() != p.size()){
                cout << s << " ";
                found = false;
            }
            if(found){
                cout << i << " ";
                res = true;
            }
        }
    }

    if(!res){
        cout << -1;
    }

    cout << "\n";
}