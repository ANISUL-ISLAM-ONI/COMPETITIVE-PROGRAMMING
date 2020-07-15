#include<bits/stdc++.h>

using namespace std;

int main(){
	int A, X, Y, Z;
	while(cin >> A >> X >> Y >> Z){
		if(A == 0 && X == 0 && Y == 0 && Z == 0) break;
		int ans = 0;
        ans += (A - X) > 0 ? (A - X) : (A - X + 40);
        ans += (Y - X) > 0 ? (Y - X) : (Y - X + 40);
        ans += (Y - Z) > 0 ? (Y - Z) : (Y - Z + 40);
        ans = (9 * ans) + 1080;
        cout << ans << "\n";
	}
	return 0;
}
