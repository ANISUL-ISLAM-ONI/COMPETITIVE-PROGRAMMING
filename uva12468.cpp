#include<bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b){
		if(a == -1 && b == -1) break;
		int ab = abs(a - b);
		if(ab < 50)  cout << ab << "\n";
		else{
			int maxx = max(a,b);
			int minn = min(a,b);
			cout << (99 - maxx) + minn + 1 << "\n";
		}
	}
	return 0;
}
