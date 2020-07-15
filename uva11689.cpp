#include<bits/stdc++.h>

using namespace std;

int main(){
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int T;
	cin >> T;
	while(T--){
		int e, f, require;
		cin >> e >> f >> require;
		int total_bottle = e + f;
		int count = 0;
		if(total_bottle < require) cout << count << "\n";
		else{
			while(1){
				total_bottle -= require;
				count++;
				if(total_bottle < (require - 1)) break;
				total_bottle++;
			}
			cout << count << "\n";
		}
	}
	return 0;
}
