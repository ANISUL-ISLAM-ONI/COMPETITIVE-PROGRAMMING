#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	getchar();
	for(int in = 1; in <= T; in++){
		string str;
		cin >> str;
		int len = str.length();
		int arr[100] = {0};
		int x = 0;
		for(int i = 0; i < len; i++){
			if(str[i] == '>'){
				x++;
				if(x == 100) x = 0;
			}
			else if(str[i] == '<'){
				x--;
				if(x == -1) x = 99; 
			}
			else if(str[i] == '+'){
				arr[x]++;
				if(arr[x] == 256) arr[x] = 0;
			}
			else if(str[i] == '-'){
				arr[x]--;
				if(arr[x] == -1) arr[x] = 255;
			}
		}
		cout << "Case " << in << ": ";
		for(int i = 0; i < 100; i++){
			if(arr[i] < 10) cout << "0" << arr[i];
			else{
				int temp2 = arr[i] % 16;
				arr[i] /= 16;
				int temp1 = arr[i] % 16;
				if(temp1 < 10) cout << temp1;
				else{
					char ab = 55 + temp1;
					cout << ab;
				}
				if(temp2 < 10) cout << temp2;
				else{
					char ab = 55 + temp2;
					cout << ab;
				}
			}
			if(i == 99) cout << "\n";
			else cout << " ";
		}
	}
	return 0;
}
