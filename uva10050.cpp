#include<bits/stdc++.h>

using namespace std;

int main(){
    int T,N,P;
    cin >> T;
    while(T--){
        cin >> N >> P;
        int a[P];
        for(int i = 0;i<P;++i) cin >> a[i];
        int ans = 0;
        for(int i = 1;i<=N;++i){
            if(i%7==6 || i%7==0) continue;
            bool found = false;
            for(int j = 0;j<P;++j)
                if(i%a[j]==0)
                    found = true;
            if(found) ++ans;
        }
        cout << ans << "\n";
    }
    return 0;
}
