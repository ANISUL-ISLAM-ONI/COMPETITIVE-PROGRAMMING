#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	while(cin >>  str){
		int count = 0, mirror = 0;
		int len = str.length() - 1;
		int it = len / 2;
		int iter = (len /2) + 1;
		for(int i = 0; i <= it; i++){
			if(str[i] == str[len]){
				count++;
				if(str[i] == 'A' || str[i] == 'H' || str[i] == 'I' || str[i] == 'M' || str[i] == 'T' || str[i] == 'U' || str[i] == 'V' || str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == '1' || str[i] == '8' || str[i] == 'O') mirror++;
			}
			else{
				if(str[i] == 'E' || str[i] == '3'){
					if(str[i] == 'E' && str[len] == '3') mirror++;
					if(str[i] == '3' && str[len] == 'E') mirror++;
				}
				else if(str[i] == 'J' || str[i] == 'L'){
                    if(str[i] == 'J' && str[len] == 'L') mirror++;
                    if(str[i] == 'L' && str[len] == 'J') mirror++;
                }
				else if(str[i] == 'S' || str[i] == '2'){
                    if(str[i] == 'S' && str[len] == '2') mirror++;
                    if(str[i] == '2' && str[len] == 'S') mirror++;
                }
				else if(str[i] == 'Z' || str[i] == '5'){
                    if(str[i] == 'Z' && str[len] == '5') mirror++;
                    if(str[i] == '5' && str[len] == 'Z') mirror++;
                }
				else{
					cout << str << " -- is not a palindrome.\n\n";
					break;
				}
			}
			len--;
		}
		if(count == iter){
			if(mirror == iter) cout << str << " -- is a mirrored palindrome.\n\n";
			else cout << str << " -- is a regular palindrome.\n\n";
		}
		else if(mirror == iter) cout << str << " -- is a mirrored string.\n\n";
	}
	return 0;
}
