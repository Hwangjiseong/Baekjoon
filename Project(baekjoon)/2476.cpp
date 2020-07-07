#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);

	int n, max = 0,sum = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b>> c;
		if (a == b && b ==c && a==c) {
				sum = 10000 + a * 1000;
				if(max<sum)max = sum;
		}
		else if (a == b&& a !=c || b == c && b!=a || a == c &&a!=b) {
			if (a == b)sum = 1000 + a * 100;
			if (b == c)sum = 1000 + b * 100;
			if (a == c)sum = 1000 + c * 100;
			if (max < sum)max = sum;
		}
		else  {
			if (a > b && a > c) sum = a * 100;
			if (b > a && b > c)sum = b * 100;
			if (c > a && c > b)sum = c * 100;
			if (max < sum)max = sum;
		}
	}
	cout << max;
	return 0;
}