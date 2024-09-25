#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    bool days[366];
    memset(days, false, sizeof(days));

    queue<int> q;
    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;

        days[aux] = true;
        q.push(aux);
    }

    int maxDay = INT_MAX;
    int res = 0;
    for(int i = 1; i <= 365; i++){
        if(q.front() == i){
            maxDay = min(maxDay, q.front() + 19);
            q.pop();
        }

        if(maxDay == i){
            maxDay = INT_MAX;
            res++;
        }
    }

    if(maxDay != INT_MAX){
        res++;
    }

    cout << res << "\n";
}