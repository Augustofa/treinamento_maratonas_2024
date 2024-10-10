#include <bits/stdc++.h>

using namespace std;

int dp[500000];
int fat(int n){
    if(dp[n] != 0){
        return dp[n];
    }
    if(n == 1 || n == 0){
        return 1;
    }
    dp[n] = n * fat(n-1);   
    return dp[n];
}

int binCoeff(int n, int k){
    int C[k + 1];
    memset(C, 0, sizeof(C));
    C[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j - 1];
    }
    return C[k];
}

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    memset(dp, 0, sizeof(dp));

    int t;
    cin >> t;

    while (t--){
        string s;
        int a, b;
        cin >> s >> a >> b;

        int combA = fat(s.size()) / ((fat(s.size() - a) * fat(a)));
        int rest = s.size() - a;
        int permB =  fat(rest) / fat(rest - b);
        rest -= b;
        cout << combA << " " << permB << " " << rest << "\n";
    }
}