#include<bits/stdc++.h>

using namespace std;

int main(){
	int round;
	while(cin >> round){
		if(round < 0) break;
		string solution, guess;
		cin >> solution >> guess;
		int len1 = solution.length();
		int len2 = guess.length();
		int hang = 0;
		int win = 0;
		int check = 0;
		for(int i = 0; i < len2; i++){
			int flag = 0;
			for(int j = 0; j < len1; j++){
				if(guess[i] == solution[j]){
					solution[j] = '*';
					flag = 1;
					win++;
				}
			}
			if(flag == 0) hang++;
			if(win == len1){
				cout << "Round " << round << "\nYou win.\n";
				check = 1;
				break;
			}
			if(hang == 7){
				cout << "Round " << round << "\nYou lose.\n";
				check = 1;
				break;
			}
		}
		if(check == 0) cout << "Round " << round << "\nYou chickened out.\n";
	}
	return 0;
}
