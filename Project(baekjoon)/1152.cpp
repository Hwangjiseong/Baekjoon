#pragma warning (disable:4996)
#include<iostream>
#include<string>//getline�� ������ string ������� �ʿ�
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);//cin, cout�� ����Ҷ��� ��� ���α׷��� ���ſ����°� ���� 
	cin.tie(0); cout.tie(0);

	string s;
	getline(cin, s);
	int sp = 0, ep = s.size();
	int cnt = 1;
	if (s[0] == ' ')sp++;
	if (s.size() != ' ')ep--;
	if (s == " ") {
		cnt = 0;

	}
	for (int i = sp; i < ep; i++) {
		if (s[i] == ' ') {
			cnt++;
		}

	}
	cout << cnt;
}