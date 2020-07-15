#include <bits/stdc++.h>

using namespace std;

int main(){
	map<string, int> mape;
	mape["Tetrahedron"] = 4;
	mape["Cube"] = 6;
	mape["Octahedron"] = 8;
	mape["Dodecahedron"] = 12;
	mape["Icosahedron"] = 20;
	int T, result = 0;
	cin >> T;
	getchar();
	while(T--){
		string str;
		cin >> str;
		result += mape[str];
	}
	cout << result << "\n";
	return 0;
}
