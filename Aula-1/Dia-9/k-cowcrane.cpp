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

    int m1, l1;
    if((l >= 0 && l < m && m <= L) || (l <= 0 && m < l && L <= m)){
        m1 = abs(m) + mMove;
        l1 = m1 + abs(M - m) + abs(L - m);
    }else{
        m1 = abs(m) + mMove;
        l1 = m1 + mBetw + lMove;
    }
    
    
    int m2, l2;
    if((m >= 0 && m < l && l <= M) || (m <= 0 && l < m && M <= l)){
        l2 = abs(l) + lMove;
        m2 = l2 + abs(L - l) + abs(M - l);
    }else{
        l2 = abs(l) + lMove;
        m2 = l2 + lBetw + mMove;
    }
    

    if((m1 <= tm && l1 <= tl) || (m2 <= tm && l2 <= tl)){
        cout << "possible\n";
    }else{
        cout << "impossible\n";
    }
}