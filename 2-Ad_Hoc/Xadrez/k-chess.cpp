#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin >> t;
    bool board[9][9];
    bool black = true;
    for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= 8; j++){
            board[i][j] = black;
            black = !black;
        }
        black = !black;
    }

    while(t--){
        char cx1, cx2;
        int x1, y1, x2, y2;
        cin >> cx1 >> y1 >> cx2 >> y2;
        x1 = (cx1 - 'A') + 1;
        x2 = (cx2 - 'A') + 1;

        if(board[x1][y1] != board[x2][y2]){
            cout << "Impossible\n";
            continue;
        }

        int midX, midY;
        bool end;

        if(x1 == x2 && y1 == y2){
            cout << 0 << " " << cx1 << " " << y1;
        }else{
            if(!((x1-y1 == x2-y2 || x1+y1 == x2+y2))){
                for(int i = 1; i <= 8; i++){
                    for(int j = 1; j <= 8; j++){
                        if((i-j == x2-y2 || i+j == x2+y2) && ((i-j == x1-y1 || i+j == x1+y1))){
                            midX = i;
                            midY = j;
                            end = true;
                            break;
                        }
                    }
                    if(end){
                        break;
                    }
                }
                cout << 2 << " " << cx1 << " " << y1 << " " << (char)(midX + 'A' - 1) << " " << midY << " ";
                cout << (char)(x2 + 'A' - 1) << " " << y2;         
            }else{
                cout << 1 << " " << cx1 << " " << y1 << " " << cx2 << " " << y2;
            }
        }

        
        cout << "\n";

    }
}