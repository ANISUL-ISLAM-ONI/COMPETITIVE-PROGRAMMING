#include<bits/stdc++.h>

using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a;
	cout << "PERFECTION OUTPUT\n";
	while(cin >> a){
		if(a == 0) break;
		int check = 0;
		int iter = a / 2;
		for(int i = 1; i <= iter; i++){
			if(a % i == 0) check += i;
		}
		if(check == a) printf("%5d  PERFECT\n",a);
		else if(check < a) printf("%5d  DEFICIENT\n",a);
		else printf("%5d  ABUNDANT\n",a);
	}
	cout << "END OF OUTPUT\n";
	return 0;
}
