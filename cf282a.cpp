#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	getchar();
	int res = 0;
	while(n--){
		string str;
		cin >> str;
		if(str[1] == '+') res++;
		else res--;
	}
	cout << res << "\n";
	return 0;
}
