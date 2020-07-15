#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, B, H, W;
    while(cin >> N >> B >> H >> W){
        int min = B + 1;
        for(int i = 0; i < H; i++){
            int p, sum = 0;
            cin >> p;
            for(int j = 0; j < W; j++){
                int a;
                cin >> a;
                if(a >= N){
                    sum = p * N;
                }
            }
            if(sum > 0 && sum < min) min = sum;
        }
        if(min <= B) cout << min << "\n";
        else cout << "stay home\n";
    }
    return 0;
}
