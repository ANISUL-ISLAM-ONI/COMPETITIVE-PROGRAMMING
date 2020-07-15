#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	if(n % 2 == 0){
		int len = n / 2;
		cout << len << "\n";
		len--;
		for(int i = 0; i < len; i++) cout << "2 ";
		cout << "2\n";
	}
	else{
		int len = n / 2;
		cout << len << "\n";
		len--;
		for(int i = 0; i < len; i++) cout << "2 ";
		cout << "3\n";
	}
	return 0;
}
