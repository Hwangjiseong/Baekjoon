#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);
	
	for (int i = 0; i < 3; i++) {
		int a, b, c, d, cnt = 0;
		cin >> a >> b >> c >> d;

		if (a == 1)cnt++;
		if (b == 1)cnt++;
		if (c == 1)cnt++;
		if (d == 1)cnt++;

		if (cnt == 1) cout << "C\n";
		else if (cnt == 2)cout << "B\n";
		else if (cnt == 3) cout << "A\n";
		else if (cnt == 4)cout << "E\n";
		else cout << "D\n";
	}
	return 0;
}