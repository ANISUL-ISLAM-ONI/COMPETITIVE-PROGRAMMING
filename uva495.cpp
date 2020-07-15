#include<bits/stdc++.h>

using namespace std;

#define lim 5001
#define len 1050

int fbn[lim][len];

int main(){
    fbn[0][0]=0;
    fbn[1][0]=1;
    fbn[2][0]=1;
    for(int i = 3; i < lim; i++){
        for(int j = 0; j < len; j++){
            fbn[i][j] += fbn[i-2][j] + fbn[i-1][j];
            if(fbn[i][j] >= 10){
                fbn[i][j+1] += fbn[i][j]/10;
                fbn[i][j] %= 10;
            }
        }
    }
    int n;
    while(cin >> n){
        int i;
        for(i = len-1; i > 0; i--){
            if(fbn[n][i] != 0) break;
        }
        cout << "The Fibonacci number for " << n << " is ";
        for(; i >= 0; i--) cout << fbn[n][i];
        cout << "\n";
    }
    return 0;
}
