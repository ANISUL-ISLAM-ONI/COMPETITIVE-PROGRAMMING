#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 1; i <= T; i++){
		int n, mile = 0, juice = 0;
		cin >> n;
		while(n--){
			int dump, x;
			cin >> dump;
			x = (dump / 30) + 1;
			mile += (x * 10);
			x = (dump / 60) + 1;
			juice += (x * 15);
		}
		cout << "Case " << i << ": ";
		if(mile == juice) cout << "Mile Juice " << mile << "\n";
		else{
			if(mile < juice) cout << "Mile " << mile << "\n";
			else cout << "Juice " << juice << "\n";
		}
	}
	return 0;
}
