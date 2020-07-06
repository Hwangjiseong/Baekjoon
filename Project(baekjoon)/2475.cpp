#pragma warning(disable:4996)
#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);
	int n, m = 0;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		m += n * n;

	}
	cout << m % 10;
	
	return 0;
}