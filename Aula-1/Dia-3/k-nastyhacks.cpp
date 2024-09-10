#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    while(n--){
        int r, e, c;
        cin >> r >> e >> c;

        int ad = e - c;
        if(r == ad){
            cout << "does not matter\n";
        }else if(r > ad){
            cout << "do not advertise\n";
        }else{
            cout << "advertise\n";
        }
    }
}