#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int a, b;
        cin >> a >> b;
        if(a < b) cout << "<\n";
        else if(a > b) cout << ">\n";
        else cout << "=\n";
    }
    return 0;
}
