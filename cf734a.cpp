#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a = 0;
	cin >> n;
	getchar();
	string str;
	cin >> str;
	for(int i = 0; i < n; i++){
		if(str[i] == 'A') a++;
	}
	if(a > (n - a)) cout << "Anton\n";
	else if(a < (n - a)) cout << "Danik\n";
	else cout << "Friendship\n";
	return 0;
}
