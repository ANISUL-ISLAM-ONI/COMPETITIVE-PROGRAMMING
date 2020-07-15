#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 1; i <= T; i++){
		int n, k, p;
		cin >> n >> k >> p;
		int count = k;
		for(int j = 1; j <= p; j++){
			if(count == n) count = 0;
			count++;
		}
		cout << "Case " << i << ": " << count << "\n";
	}
	return 0;
}
