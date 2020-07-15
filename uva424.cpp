#include<bits/stdc++.h>

using namespace std;

int main(){
	int i = 0,len[101];
	string str[101];
	while(cin >> str[i]){
		if(str[i] == "0") break;
		len[i] = str[i].length() - 1;
		i++;
	}
	int* m = max_element(len,len+i);
	int max = *m;
	string actual;
	int ext = 0;
	for(int j = 0; j <= max; j++){
		int sum = 0;
		for(int k = 0; k < i; k++){
			if(len[k] == -1) continue;
			sum += (str[k][len[k]] - '0');
			len[k]--;
		}
		sum += ext;
		actual += to_string(sum % 10);
		ext = sum / 10;
	}
	if(ext > 0){
		string hen = to_string(ext);
		reverse(hen.begin(), hen.end());
		actual += hen;
	}
	reverse(actual.begin(), actual.end());
	cout << actual << "\n";
	return 0;
}
