#pragma warning (disable:4996)
#include<iostream>
#include<string>//getline�� ������ string ������� �ʿ�
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);//cin, cout�� ����Ҷ��� ��� ���α׷��� ���ſ����°� ���� 
	cin.tie(0); cout.tie(0);
	string s;

	while (true) {
		int cnt = 0;
		getline(cin, s);
		if (s == "#")break;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
				cnt++;
			}
		}
		cout << cnt << "\n";
	}
}