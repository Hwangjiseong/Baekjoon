#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//cin cout�� ����Ҷ� ���α׷� ���ſ����°� ����

	long long n,re = 0;
	cin >> n;

	for (int i = 1; i < n; i++) {
		if (n == 2) {
			cout << n + 1;
		}
		else {
			re += (n + 1)*i;
		}
	}
	cout << re;
	return 0;
}