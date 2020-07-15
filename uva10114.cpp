#include<bits/stdc++.h>

using namespace std;

int main(){
	int mnt, deprec;
	double dwn, lon;
	while(cin >> mnt >> dwn >> lon >> deprec){
		if(mnt < 0) break;
		mnt++;
		double dep[mnt];
		int cm = 0;
		double cdep = 0;
		for(int dr = 0; dr < deprec; dr++){
			int m;
			double d;
			cin >> m >> d;
			for(int k = cm; k < m; k++) dep[k] = cdep;
			dep[m] = d;
			cm = m+1;
			cdep = d;
		}
		for(int k = cm; k < mnt; k++) dep[k] = cdep;
		double perm = lon / (mnt-1);
		double total = (lon + dwn) * (1 - dep[0]);
		int i = 0;
		while(total < lon){
			i++;
			lon -= perm;
			total *= (1 - dep[i]);
		}
		if(i == 1) cout << i << " month\n";
		else cout << i << " months\n";
	}
	return 0;
}
