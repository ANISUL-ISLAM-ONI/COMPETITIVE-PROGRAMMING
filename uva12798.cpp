#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m){
		int count = 0;
		for(int i = 0; i < n; i++){
			int dump = 0;
			for(int j = 0; j < m; j++){
				int a;
				cin >> a;
				if(a > 0) dump++;
			}
			if(dump == m) count++;
		}
		cout << count << "\n";
	}
	return 0;
}
