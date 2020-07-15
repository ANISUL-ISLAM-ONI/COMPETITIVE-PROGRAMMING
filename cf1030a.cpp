#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, co = 0;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		co += a;
	}
	if(co == 0) cout << "EASY\n";
	else cout << "HARD\n";
	return 0;
}
