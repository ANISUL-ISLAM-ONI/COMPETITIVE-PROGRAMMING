#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, o = 0, n = 0, e = 0, r = 0, z = 0;
	cin >> t;
	while(t--){
		char a;
		cin >> a;
		if(a == 'o') o++;
		else if(a == 'n') n++;
		else if(a == 'e') e++;
		else if(a == 'r') r++;
		else z++;
	}
	int zeo = min(o, e);
	int a = min(zeo, z);
	a = min(a, r);
	int b = min(zeo, n);
	int c = max(a, b);
	if(c == a){
		o -= a;
		e -= a;
		if(o > 0 && e > 0){
            int d = min(o, e);
            for(int i = 0; i < d; i++) cout << "1 ";
        }
		for(int i = 1; i < a; i++) cout << "0 ";
		cout << "0\n";
	}
	else{
		o -= b;
		e -= b;
		for(int i = 1; i < b; i++) cout << "1 ";
		cout << "1";
		if(o > 0 && e > 0){
            int d = min(o, e);
            d = min(d, z);
            d = min(d, r);
            for(int i = 0; i < d; i++) cout << " 0";
        }
		cout << "\n";
	}
	return 0;
}
