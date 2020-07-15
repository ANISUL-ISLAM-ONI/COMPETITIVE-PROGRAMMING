#include<bits/stdc++.h>

using namespace std;

int main(){
	int h, m, s, speed = 0, inisec = 0, sec = 0;
	double dis = 0;
	while(scanf("%d:%d:%d", &h, &m, &s) == 3){
		string str;
		getline(cin, str);
		if(str.length() != 0){
			if(speed > 0){
				sec = ((h * 60 * 60) + (m * 60) + s) - inisec;
				dis += (((double)speed * (double)sec * 10.0) / 36.0);
			}
			speed = stoi(str);
			inisec = (h * 60 * 60) + (m * 60) + s;
			continue;
		}
		sec = ((h * 60 * 60) + (m * 60) + s) - inisec;
        dis += (((double)speed * (double)sec * 10.0) / 36.0);
		if(h < 10) cout << "0" << h << ":";
		else cout << h << ":";
		if(m < 10) cout << "0" << m << ":";
		else cout << m << ":";
		if(s < 10) cout << "0" << s << " ";
		else cout << s << " ";
		printf("%.2lf km\n", dis/1000.0);
		inisec = (h * 60 * 60) + (m * 60) + s;
	}
	return 0;
}
