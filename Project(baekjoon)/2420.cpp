#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);

	long long n, m;
	cin >> n >> m;
	if (n > m) swap(n, m);
	cout << m - n << "\n";

	return 0;
}