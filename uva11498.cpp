#include<bits/stdc++.h>

using namespace std;

int main(){
    int K;
    while(cin >> K){
        int N, M;
        cin >> N >> M;
        for(int i = 0; i < K; i++){
            int X,Y;
            cin >> X >> Y;
            if(X == N || Y == M) cout << "divisa\n";
            else if(X > N && Y > M) cout << "NE\n";
            else if(X < N && Y > M) cout << "NO\n";
            else if(X < N && Y < M) cout << "SO\n";
            else if(X > N && Y < M) cout << "SE\n";
        }
    }
    return 0;
}
