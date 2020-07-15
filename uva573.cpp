#include<bits/stdc++.h>

using namespace std;

int main(){
	int h, u, d, f;

	while(cin >> h >> u >> d >> f){
        if(h == 0) break;
		double U = u;
		double F = u * (f / 100.0);
		double H = 0;
		int D = 0;
        do{
			D++;
			H += U;
			if(H > h){
				cout << "success on day ";
				break;
			}
			H -= d;
			if(H < 0){
				cout << "failure on day ";
				break;
			}
			U -= F;
			if(U < 0) U = 0;
		} while (true);

		cout << D << "\n";
	}

	return 0;
}
