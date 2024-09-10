#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int quant = 0;
        stack<int> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '\\'){
                st.push(i);
            }else if(s[i] == '/' && !st.empty()){
                quant += (i - st.top());
                st.pop();
            }
        }

        cout << quant << "\n";
    }
}