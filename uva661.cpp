#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, c, seq = 1;
	while(cin >> n >> m >> c){
		if(n == 0 && m == 0 && c == 0) break;
		int cap[n+1];
		bool pac[n+1];
		for(int i = 1; i <= n; i++){
			cin >> cap[i];
			pac[i] = false;
		}
		int ma = 0, sum = 0;
		for(int i = 0; i < m; i++){
			int a;
			cin >> a;
			if(pac[a]){
				sum -= cap[a];
				pac[a] = false;
				ma = max(sum, ma);
			}
			else{
				sum += cap[a];
				pac[a] = true;
				ma = max(sum, ma);
			}
		}
		cout << "Sequence " << seq << "\n";
		seq++;
		if(ma > c){
			cout << "Fuse was blown.\n";
		}
		else{
			cout << "Fuse was not blown.\nMaximal power consumption was " << ma << " amperes.\n";
		}
		cout << "\n";
	}
	return 0;
}
