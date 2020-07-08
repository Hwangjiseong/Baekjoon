#include<iostream>
#include<string>
using namespace std;



int main() {
	

	string s;
	getline(cin, s);
	double n = 0.0;
	if (s[0] == 'A')n = 4.0;if (s[0] == 'B')n = 3.0;
	if (s[0] == 'C')n = 2.0; if (s[0] == 'D')n = 1.0;
	if (s[1] == '+')n += 0.3; if (s[1] == '-')n -= 0.3;
	printf("%.1f", n);
	return 0;
}