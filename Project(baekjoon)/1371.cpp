#pragma warning (disable:4996)
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>//getline을 쓸려면 string 헤더파일 필요
using namespace std;

int al[26];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//cin, cout만 사용할때만 사용 프로그램이 무거워지는걸 방지


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