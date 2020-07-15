#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	char out = 'a';
	string first = "BFPV";
	string second = "CGJKQSXZ";
	string third = "DT";
	string fourth = "L";
	string fifth = "MN";
	string sixth = "R";
	while(cin >> str){
		int len = str.length();
		for(int i = 0; i < len; i++){
			int flag = 0;
			if(str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'H' && str[i] != 'W' && str[i] != 'Y'){
				for(int j = 0; j < 4; j++){
					if(flag == 1) break;
					if(str[i] == first[j]){
						flag = 1;
						if('1' == out) break;
						out = '1';
						cout << "1";
						break;
					}
				}
				for(int j = 0; j < 8; j++){
                	if(flag == 1) break;
                	if(str[i] == second[j]){ 
                    	flag = 1;
                    	if('2' == out) break;
                    	out = '2';
                    	cout << "2";
                    	break;
                	}
            	}
				for(int j = 0; j < 2; j++){
                	if(flag == 1) break;
                	if(str[i] == third[j]){ 
                    	flag = 1;
                    	if('3' == out) break;
                    	out = '3';
                    	cout << "3";
                    	break;
                	}
            	}
				for(int j = 0; j < 1; j++){
                	if(flag == 1) break;
                	if(str[i] == fourth[j]){ 
                    	flag = 1;
                    	if('4' == out) break;
                    	out = '4';
                    	cout << "4";
                    	break;
                	}
            	}
				for(int j = 0; j < 2; j++){
                	if(flag == 1) break;
                	if(str[i] == fifth[j]){ 
                    	flag = 1;
                    	if('5' == out) break;
                    	out = '5';
                    	cout << "5";
                    	break;
                	}
            	}
				for(int j = 0; j < 1; j++){
                	if(flag == 1) break;
                	if(str[i] == sixth[j]){ 
                    	flag = 1;
                    	if('6' == out) break;
                    	out = '6';
                    	cout << "6";
                    	break;
                	}
            	}
			}
			else{
				out = 'a';
			}
		}
		out = 'a';
		cout << "\n";
	}
	return 0;
}
