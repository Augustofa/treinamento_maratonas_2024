#include <bits/stdc++.h>

using namespace std;

int i = 0, j = 0;
int quant = 0;
vector<pair<int,int>> pos(70);
vector<string> mat;

void desenhaLinhas(){
    for(int k = 0; k < quant-1; k++){
        pair<int,int> p1 = pos[k];
        pair<int,int> p2 = pos[k+1];
        
        if(p1.first == p2.first){
            int init = min(p1.second, p2.second);
            int fim = max(p1.second, p2.second);
            for(int l = init+1; l < fim; l++){
                if(mat[p1.first][l] == '.'){
                    mat[p1.first][l] = '-';
                }else if(mat[p1.first][l] == '|'){
                    mat[p1.first][l] = '+';
                }
            }
        }else{
            int init = min(p1.first, p2.first);
            int fim = max(p1.first, p2.first);
            for(int l = init+1; l < fim; l++){
                if(mat[l][p1.second] == '.'){
                    mat[l][p1.second] = '|';
                }else if(mat[l][p1.second] == '-'){
                    mat[l][p1.second] = '+';
                }
            }
        }
    }

    for(auto linha : mat){
        cout << linha << "\n";
    }

    i = 0;
    j = 0;
    quant = 0;
    mat.clear();
    pos.clear();

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    do{
        if(s.empty()){
            desenhaLinhas();
            cout << "\n";
            continue;
        }
        mat.push_back(s);
        for(auto c : s){
            if(c != '.'){
                quant++;
                if(c > '9'){
                    if(c <= 'Z'){
                        pos[((int) c - 'A' + 36)] = {i,j};
                    }else{
                        pos[((int) c - 'a' + 10)] = {i,j};
                    }
                }else{
                    pos[((int) c - '0')] = {i,j};
                }
            }
            j++;
        }

        i++;
        j = 0;
    }while(getline(cin,s));

    desenhaLinhas();
}