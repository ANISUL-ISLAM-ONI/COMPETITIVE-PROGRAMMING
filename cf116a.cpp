#include <bits/stdc++.h>

using namespace std;

int main(){
	int s, ma = 0, sum = 0;
	cin >> s;
	while(s--){
		int down, up;
		cin >> down >> up;
		sum -= down;
		sum += up;
		ma = max(ma, sum);
	}
	cout << ma << "\n";
	return 0;
}
