#include<bits/stdc++.h>

using namespace std;

int main(){
	string a, b;
	while(getline(cin,a)){
		getline(cin,b);
		int lena = a.length();
		int lenb = b.length();
		int sum = 0, dum = 0;
		for(int i = 0; i < lena; i++){
			if(a[i] >= 'A' && a[i] <= 'Z') sum += (a[i] - 64);
			else if(a[i] >= 'a' && a[i] <= 'z') sum += (a[i] - 96);
		}
		if(sum % 9 == 0) sum = 9;
		else sum %= 9;
		for(int i = 0; i < lenb; i++){
            if(b[i] >= 'A' && b[i] <= 'Z') dum += (b[i] - 64);
            else if(b[i] >= 'a' && b[i] <= 'z') dum += (b[i] - 96);
        }
		if(dum % 9 == 0) dum = 9;
		else dum %= 9;
		int maxx = max(sum,dum);
		int minn = min(sum,dum);
		double love = ((double) minn / (double) maxx) * 100.0;
		printf("%.2lf",love);
		cout << " %\n";
	}
	return 0;
}
