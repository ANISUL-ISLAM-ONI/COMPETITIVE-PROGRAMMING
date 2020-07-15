#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while (T--){
        int a,f;
		cin >> a >> f;
		for(int i = 1; i <= f; i++){
			for(int j = 1; j <= a; j++){
				for(int k = 1; k <= j; k++) {
					cout << j;
				}
				cout << "\n";
			}
			for(int j = a - 1; j >= 1; j--) {
				for (int k = 1; k <= j; k++) {
					cout << j;
				}
				cout << "\n";
			}
			if(i != f) cout << "\n";
		}
		if(T) cout << "\n";
	}

	return 0;
}
