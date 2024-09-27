#include <bits/stdc++.h>

using namespace std;

list<char> p1, p2, m;
bool turno = false;

map<char, int> mapa = {
    {'J', 1},
    {'Q', 2},
    {'K', 3},
    {'A', 4}
};

void cobre(int quant){
    for(int i = 0; i < quant; i++){
        if(turno){
            m.push_back(p1.front());
            p1.pop_front();
        }else{
            m.push_back(p2.front());
            p2.pop_front();
        }

        if(mapa[m.back()] != 0){
            turno = !turno;
            cobre(mapa[m.back()]);
            break;
        }
    }
}

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    while(true){
        string s1, s2;
        for(int i = 0; i < 26; i++){
            cin >> s1;
            if(s1 == "#"){
                return 0;
            }
            cin >> s2;
            p2.push_front(s1[1]);
            p1.push_front(s2[1]);
        }

        string s;

        while(true){
            if((p1.empty() && turno) || (p2.empty() && !turno)){
                break;
            }
            if(turno){
                m.push_back(p1.front());
                p1.pop_front();
            }else{
                m.push_back(p2.front());
                p2.pop_front();
            }
            turno = !turno;
            if(mapa[m.back()] != 0){
                cobre(mapa[m.back()]);
                if((p1.empty() && turno) || (p2.empty() && !turno)){
                    break;
                }
                if(turno){
                    p1.splice(p1.end(), m);
                }else{
                    p2.splice(p2.end(), m);
                }
            }
        }

        if(p1.empty()){
            cout << 2 << " " << p2.size();
        }else{
            cout << 1 << " " << p1.size();
        }
        p1.clear();
        p2.clear();
        m.clear();
        turno = false;
    }
}