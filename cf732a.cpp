#include <bits/stdc++.h>

using namespace std;

int main(){
	int k, r, i;
	cin >> k >> r;
	for(i = 1; i <= 10; i++){
		int temp = i * k;
		if(temp % 10 == 0 || temp % 10 == r) break;
	}
	cout << i << "\n";
	return 0;
}
