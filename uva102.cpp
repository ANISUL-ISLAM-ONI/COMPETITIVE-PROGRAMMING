#include<bits/stdc++.h>

using namespace std;

int main(){
	int B[3], G[3], C[3];
	while(cin >> B[0] >> G[0] >> C[0] >> B[1] >> G[1] >> C[1] >> B[2] >> G[2] >> C[2]){
		int min = INT_MAX, temp;
		char ans[4];
		//BCG
		temp = C[0] + G[0] + B[1] + G[1] + B[2] + C[2];
		if (temp < min) {
			min = temp;
			strcpy(ans, "BCG");
		}
		//BGC
		temp = C[0] + G[0] + B[1] + C[1] + B[2] + G[2];
		if (temp < min) {
			min = temp;
			strcpy(ans, "BGC");
		}
		//CBG
		temp = B[0] + G[0] + C[1] + G[1] + B[2] + C[2];
		if (temp < min) {
			min = temp;
			strcpy(ans, "CBG");
		}
		//CGB
		temp = B[0] + G[0] + B[1] + C[1] + G[2] + C[2];
		if (temp < min) {
			min = temp;
			strcpy(ans, "CGB");
		}
		//GBC
		temp = C[0] + B[0] + C[1] + G[1] + B[2] + G[2];
		if (temp < min) {
			min = temp;
			strcpy(ans, "GBC");
		}
		//GCB
		temp = C[0] + B[0] + B[1] + G[1] + G[2] + C[2];
		if (temp < min) {
			min = temp;
			strcpy(ans, "GCB");
		}

		cout << ans << " " << min << "\n";
	}
	return 0;
}
