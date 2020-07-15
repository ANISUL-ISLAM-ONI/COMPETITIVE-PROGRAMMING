#include <bits/stdc++.h>

using namespace std;

int minDis(char e, char s){
	int dem = 0;
	int ee = (e - 'a') + 1;
    int ss = (s - 'a') + 1;
	int ch = abs(ee - ss);
	if(((e >= 'a' && e <= 'm') && (s >= 'a' && s <= 'm')) || ((e >= 'n' && e <= 'z') && (s >= 'n' && s <= 'z'))){
		dem += ch;
	}
	else{
		if(e >= 'n' && e <= 'z'){
			int te = 'z' - e;
			te += ss;
			dem += min(te, ch);
		}
		else{
			int te = 'z' - s;
			te += ee;
			dem += min(te, ch);
		}
	}
	return dem;
}

int main(){
	string str;
	cin >> str;
	int len = str.length();
	char status = 'a';
	int res = 0;
	for(int i = 0; i < len; i++){
		res += minDis(str[i], status);
		status = str[i];
	}
	cout << res << "\n";
	return 0;
}
