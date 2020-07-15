#include<bits/stdc++.h>

using namespace std;

int main(){
	long double x1, x2, x3, y1, y2, y3;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
		long double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		long double b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
		long double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
		long double d = sqrt((a + b + c) * (a + b - c) * (b + c - a) * (a + c - b));
		long double radius = (a * b * c) / d;
		long double pi = 3.141592653589793;
		long double circum = 2 * pi * radius;
		printf("%.2Lf\n", circum);
	}
	return 0;
}
