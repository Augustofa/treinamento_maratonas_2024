#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, l;
    cin >> m >> l;
    int M, L;
    cin >> M >> L;
    int tm, tl;
    cin >> tm >> tl;

    int mMove = abs(M - m);
    int lMove = abs(L - l);
    int mBetw = abs(M - l);
    int lBetw = abs(L - m);

    

    int t = 0, x = 0;
    int low, high;
    if(m > 0){
        low = 0;
        high = m;
    }else{
        low = m;
        high = 0;
    }
    if((l >= low && l <= high) && L > high){
        
    }
    int m1 = abs(m) + mMove;
    int l1 = m1 + mBetw + lMove;
    

    int l2 = abs(l) + lMove;
    int m2 = l2 + lBetw + mMove;

    if((m1 <= tm && l1 <= tl) || (m2 <= tm && l2 <= tl)){
        cout << "possible\n";
    }else{
        cout << "impossible\n";
    }
}