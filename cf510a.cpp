#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	bool ch = true;
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){
			for(int j = 1; j <= m; j++){
				if(j == m && ch == true) cout << "#";
				else if(j == 1 && ch == false) cout << "#";
				else cout << ".";
			}
			ch = (!ch);
		}
		else{
			for(int j = 1; j <= m; j++) cout << "#";
		}
		cout << "\n";
	}
	return 0;
}
