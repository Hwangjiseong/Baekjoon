#pragma warning (disable:4996)
#include<iostream>
#include<algorithm>
#include<string>//getline�� ������ string ������� �ʿ�
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//cin, cout�� ����Ҷ��� ��� ���α׷��� ���ſ����°� ����

	int arr[4] = { 0,1,0,0 };
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		swap(arr[x], arr[y]);
	}
	for (int i = 0; i < 4; i++)if (arr[i] == 1)cout << i;


	return 0;
}