#include<bits/stdc++.h>

using namespace std;

int main(){
	map<string,int> mape;
	map<string,int>::iterator itr;
	int T;
	scanf("%d\n\n",&T);
	while(T--){
		string str;
		int con = 0;
		while(getline(cin, str)){
			if(str.length() == 0) break;
			mape[str]++;
			con++;
		}
		for(itr = mape.begin(); itr != mape.end(); itr++){
			double avg = (double) (itr -> second) / (double) con;
			avg *= 100.0;
			cout << itr -> first << " ";
			printf("%.4lf\n",avg);
		}
		if(T > 0){
			cout << "\n";
			mape.clear();
		}
	}
	return 0;
}
