#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    for(string::iterator it = s.begin(); it != s.end(); it++){
        *it = tolower(*it);
    }

    char cs[s.size()];
    strcpy(cs, s.c_str());
    
    vector<string> tks;

    char *c;
    c = strtok(cs, ". ");
    while(c != NULL){
        tks.push_back(c);
        c = strtok(NULL, ". ");
    }

    sort(tks.begin(), tks.end());
    for(auto s : tks){
        cout << s << "\n";
    }

    map<string,int> mapa;
    for(auto s : tks){
        mapa[s]++;
    }

    auto it = max_element(mapa.begin(), mapa.end(), [] (const pair<string,int> &p1, const pair<string,int> &p2) {
        return p1.second < p2.second;
    });
    cout << it->first << "\n";
}