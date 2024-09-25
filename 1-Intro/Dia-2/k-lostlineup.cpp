#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int pos[n+1];
    pos[0] = 1;
    for(int i = 2; i <= n; i++){
        int dist;
        cin >> dist;
        pos[dist+1] = i;
    }
    for(int i = 0; i < n; i++){
        cout << pos[i] << " ";
    }
    cout << endl;
}