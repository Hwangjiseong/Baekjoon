#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;

int change(char s) {
	switch (s)
	{
	case '-': return 0;
		break;
	case '\\': return 1;
		break;
	case '(': return 2;
		break;
	case '@': return 3;
		break;
	case '?': return 4;
		break;
	case '>': return 5;
		break;
	case '&': return 6;
		break;
	case '%': return 7;
		break;
	case '/': return -1;
	default:
		break;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s;

	while (getline(cin, s)) {
		if (s == "#") break;
		int n = 0, re = 0;
		for (int i = 0; i < s.size(); i++) {
			n = change(s[i]);
			int temp = 1;
			for (int j = 0; j < (s.size() - 1 - i); j++) {
				temp *= 8;
				if ((s.size() - 1 - i) < 0)temp = 1;
			}
			re += (n * temp);
		}
		cout << re << "\n";
	}

	return 0;
}