#include <bits/stdc++.h>

using namespace std;

int sum(int a){
	string str = to_string(a);
	int len = str.length();
	int s = 0;
	for(int i = 0; i < len; i++){
		s += (str[i] - '0');
	}
	return s;
}

int main(){
	int a;
	cin >> a;
	while(1){
		int dump = sum(a);
		if(dump % 4 == 0){
			cout << a << "\n";
			break;
		}
		a++;
	}
	return 0;
}
