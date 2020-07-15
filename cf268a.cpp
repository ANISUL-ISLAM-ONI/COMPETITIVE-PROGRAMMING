#include <bits/stdc++.h>

using namespace std;

int main(){
	int T, res = 0;
	cin >> T;
	int home[T], guest[T];
	for(int i = 0; i < T; i++) cin >> home[i] >> guest[i];
	for(int i = 0; i < T; i++){
		for(int j = 0; j < T; j++){
			if(home[i] == guest[j] && i != j) res++;
		}
	}
	cout << res << "\n";
	return 0;
}
