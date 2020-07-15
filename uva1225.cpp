#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    for(int x = 0; x < T; x++){
        int n;
        cin >> n;
        string s = "";
        for(int i = 1; i <= n; i++) s += to_string(i);
        map<char , int > m;
        int len = s.length();
        for(int i = 0; i < len; i++){
            m[s[i]]++;
        }
        for(char i = '0'; i < '9'; i++){
            cout << m[i] << " ";
        }
        cout << m['9'] << "\n";
        m.clear();
    }

}

