#include <bits/stdc++.h>

using namespace std;

int main(){
    double x, y;
    cin >> x >> y;
    if(y == 1 && x == 0){
        cout << "ALL GOOD" << endl;
    }else if(y == 1){
        cout << "IMPOSSIBLE" << endl;
    }else{
        cout << fixed << setprecision(9) << (-x)/(y-1) << endl;
    }
}