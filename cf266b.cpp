#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x;
	cin >> n >> x;
	getchar();
	n--;
	string str;
	cin >> str;
	while(x--){
		for(int i = 0; i < n; i++){
			if(str[i] == 'B' && str[i + 1] == 'G'){
				str[i] = 'G';
				str[++i] = 'B';
			}
		}
	}
	cout << str << "\n";
	return 0;
}
