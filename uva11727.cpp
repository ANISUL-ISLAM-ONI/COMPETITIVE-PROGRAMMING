#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if((b > a && a > c) || (c > a && a > b)) cout << "Case " << i << ": " << a << "\n";
        else if((a > b && b > c) || (c > b && b > a)) cout << "Case " << i << ": " << b << "\n";
        else if((a > c && c > b) || (b > c && c > a)) cout << "Case " << i << ": " << c << "\n";
    }
    return 0;
}
