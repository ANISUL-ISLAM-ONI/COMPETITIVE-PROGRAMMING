#include <bits/stdc++.h>

using namespace std;

int main(){
	int res;
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			int a;
			cin >> a;
			if(a == 1){
				res = abs(i - 3);
				res += abs(j - 3);
			}
		}
	}
	cout << res << "\n";
	return 0;
}
