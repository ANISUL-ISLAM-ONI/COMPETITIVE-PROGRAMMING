#include<bits/stdc++.h>

using namespace std;

int main(){
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int a, b;
	while(cin >> a >> b){
		bool x = true;
		cout << "[";
		while(b){
			cout << a / b;
			int temp = b;
			b = (a % b);
			a = temp;
			if(b && x){
				cout << ";";
				x = false;
			}
			else if(b) cout << ",";
		}
		cout << "]\n";
	}
	return 0;
}
