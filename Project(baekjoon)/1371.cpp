#pragma warning (disable:4996)
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>//getline�� ������ string ������� �ʿ�
using namespace std;

int al[26];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//cin, cout�� ����Ҷ��� ��� ���α׷��� ���ſ����°� ����


	string s;
	while (cin >> s) {
		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= 'a' && s[i] <= 'z') {
				al[s[i] - 'a']++;
			}
		}
		s.clear();
	}
	int temp = al[0];
	for (int i = 0; i < 26; i++) {
		temp = max(al[i], temp);
	}
	for (int i = 0; i < 26; i++) {
		if (al[i] == temp) {
			cout << (char)(i + 'a');
		}
	}
	cout << "\n";
	return 0;
}