#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
    	bitset<32> first(a);
    	bitset<32> second(b);
    	bitset<32> result(0);
    	bitset<1> val(1);
    	for(int i = 0; i < 31; i++){
        	if(first[i] == 1 && second[i] == 0) result[i] = val[0];
        	if(first[i] == 0 && second[i] == 1) result[i] = val[0];
    	}
    	cout << result.to_ulong() << "\n";
	}
    return 0;
}

