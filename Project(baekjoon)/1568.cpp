#pragma warning (disable:4996)
#include<iostream>
#include<algorithm>
#include<string>//getline�� ������ string ������� �ʿ�
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//cin, cout�� ����Ҷ��� ��� ���α׷��� ���ſ����°� ����

	int n, time = 1, k = 1;

	cin >> n;
	while (true) {
		if (n - k >= 0) {
			n -= k;

		}
		else {
			k = 1;
			n -= k;
		}
		if (n == 0)break;
		time++;
		k++;
	}
	cout << time;
	return 0;
}