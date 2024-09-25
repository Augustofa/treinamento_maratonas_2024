#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int k;
        cin >> k;
        string name;
        getline(cin, name);
        getline(cin, name);

        bool pea = false, pan = false;
        while(k--){
            string s;
            getline(cin, s);
            if(s == "pea soup"){
                pea = true;
            }
            if(s == "pancakes"){
                pan = true;
            }
        }
        if(pea && pan){
            cout << name << "\n";
            return 0;
        }
    }

    cout << "Anywhere is fine I guess\n";

}