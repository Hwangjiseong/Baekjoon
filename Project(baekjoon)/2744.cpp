#include<iostream>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);
	
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 91)s[i] = s[i] - 32;
		else s[i] = s[i] + 32;
	}
	cout << s;
	
	return 0;
}