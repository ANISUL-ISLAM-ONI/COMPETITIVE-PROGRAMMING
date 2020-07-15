#include<bits/stdc++.h>

using namespace std;

int main(){
	string str[16];
	str[0] = str[4] = str[8] = str[12] = "Happy\n";
	str[1] = str[5] = str[9] = str[13] = "birthday\n";
	str[2] = str[6] = str[10] = str[14] = "to\n";
	str[3] = str[7] = str[15] = "you\n";
	str[11] = "Rujia\n";
	int n;
	cin >> n;
	string test[n];
	for(int i = 0; i < n; i++) cin >> test[i];
	bool flag = false;
	int j = 0;
	for(int i = 0; i < 16; i++){
		cout << test[j] << ": " << str[i];
		j++;
		if(j == n){
			j = 0;
			flag = true;
		}
		if(i == 15 && flag != true) i = -1;
	}
	return 0;
}
