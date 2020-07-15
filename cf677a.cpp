#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, h;
	cin >> n >> h;
	int co = 0;
	while(n--){
		int a;
		cin >> a;
		if(a % h == 0) co += (a / h);
		else co += ((a / h) + 1);
	}
	cout << co << "\n";
	return 0;
}
