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
        char cxi, cxf;
        int xi, yi, xf, yf;
        cin >> cxi >> yi >> cxf >> yf;
        xi = 8 - (cxi - 'A');
        xf = 8 - (cxf - 'A');

        if(board[xi][yi] != board[xf][yf]){
            cout << "Impossible\n";
            continue;
        }

        int midX = xi, midY = yi;
        while(!(midX-midY == xf-yf || midX+midY == xf+yf) && midX <= 8 && midY <= 8){
            midX++;
            midY++;
        }
        if(midX > 8 || midY > 8){
            midX = xi;
            midY = yi;
            while(!(midX-midY == xf-yf || midX+midY == xf+yf) && midX <= 8 && midY >= 1){
                midX++;
                midY--;
            }
            if(midX > 8 || midY < 1){
                midX = xi;
                midY = yi;
                while(!(midX-midY == xf-yf || midX+midY == xf+yf) && midX >= 1 && midY <= 8){
                    midX--;
                    midY++;
                }
                if(midX > 1 || midY < 8){
                    midX = xi;
                    midY = yi;
                    while(!(midX-midY == xf-yf || midX+midY == xf+yf) && midX >= 1 && midY >= 1){
                        midX--;
                        midY--;
                    }
                }
            }
        }
        
        if(xi == xf && yi == yf){
            cout << 0 << " " << cxi << " " << yi;
        }else{
            if(midX == xf && midY == yf){
                cout << 1 << " " << cxi << " " << yi << " " << (char)((8 - midX) + 'A') << " " << midY;
            }else{
                cout << 2 << " " << cxi << " " << yi << " " << (char)((8 - midX) + 'A') << " " << midY << " ";
                cout << (char)((8 - xf) + 'A') << " " << yf;
            }
            
        }
        cout << "\n";

    }
}