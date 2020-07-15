#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        int N, max = 0;
        cin >> N;
        for(int j = 0; j < N; j++){
            int a;
            cin >> a;
            if(a > max) max = a;
        }
        cout << "Case " << i << ": " << max << "\n";
    }
    return 0;
}

