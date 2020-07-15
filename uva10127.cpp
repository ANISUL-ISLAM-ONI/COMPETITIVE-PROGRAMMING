#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n){
        int ones = 0, c = 0;
        do{
            c = (c*10+1) % n;
            ones++;
        }
        while(c != 0);
        cout << ones << "\n";
    }
	return 0;
}
