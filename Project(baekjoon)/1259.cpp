#pragma warning (disable:4996)
#include<iostream>
#include<string>//getline�� ������ string ������� �ʿ�
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);//cin, cout�� ����Ҷ��� ��� ���α׷��� ���ſ����°� ���� 
	cin.tie(0); cout.tie(0);
	string s;
	while (true) {
		getline(cin, s);
		bool bck = false;
		if (s == "0")break;
		for (int i = 0; i < s.size() / 2; i++) {
			if (!bck && s[i] != s[(s.size() - 1) - i]) {
				bck = true;
				cout << "no\n";
			}

		}
		if (bck == false) {
			cout << "yes\n";
		}
	}
}