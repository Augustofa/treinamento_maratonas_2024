#include <bits/stdc++.h>

using namespace std;

int main(){
    string t, p;
    getline(cin, t);
    getline(cin, p);

    int pos = 0, count = 0;
    while((pos = t.find(p, pos)) != string::npos){
        cout << pos << " ";
        pos++;
        count++;
    }

    if(count == 0){
        cout << -1;
    }
    cout << "\n";
}