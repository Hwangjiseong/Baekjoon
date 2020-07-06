#pragma warning(disalbe:4996)
#include<iostream>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);
	
	string s;

	while (true) {
		getline(cin, s);
		int cnt = 0;
		if (s == "#")break;
		for (int i = 1; i < s.size(); i++) {
			
			if (s[i] >= 65 && s[i] <= 90) {
				s[i] += 32;
			}//대소문자 상관없이 할때 
			if (s[0] == s[i]) {
				cnt++;
			}
		}
		cout << s[0] << " " << cnt << "\n";
	}
	return 0;
}