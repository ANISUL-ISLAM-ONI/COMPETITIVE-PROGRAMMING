#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int player, snaorlad, die;
		cin >> player >> snaorlad >> die;
		int play[player];
		for(int i = 0; i < player; i++) play[i] = 1;
		int first[snaorlad], second[snaorlad];
		for(int i = 0; i < snaorlad; i++){
			cin >> first[i] >> second[i];
		}
		int i = 0;
		int dump[die];
		for(int j = 0; j < die; j++) cin >> dump[j];
		for(int j = 0; j < die; j++){
			play[i] += dump[j];
			for(int x = 0; x < snaorlad; x++){
				if(play[i] == first[x]){
					play[i] = second[x];
					break;
				}
			}
			if(play[i] >= 100){
				play[i] = 100;
				break;
			}
			i++;
			if(i == player) i = 0;
		}
		for(int j = 1; j <= player; j++){
			cout << "Position of player " << j << " is " << play[j-1] << ".\n";
		}
	}
	return 0;
}
