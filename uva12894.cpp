#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int Xo, Yo, X1, Y1, Cx, Cy, r;
		cin >> Xo >> Yo >> X1 >> Y1 >> Cx >> Cy >> r;
		int len = X1 - Xo;
		int wid = Y1 - Yo;
		Cx = Cx - Xo;
		Cy = Cy - Yo;
		if(((6 * len) == (10 * wid)) && ((9 * len) == (20 * Cx)) && (wid == (2 * Cy)) && (len == (5 * r))) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
