#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, w, n;
    cin >> h >> w >> n;

    int largura = 0;
    int alt = 0;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;

        largura += val;
        if(alt == h){
            break;
        }
        if(largura == w){
            largura = 0;
            alt++;
        }else if(largura > w){
            cout << "NO\n";
            return 0;
        }
    }

    if(alt == h){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}