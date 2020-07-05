#pragma warning (disable:4996)
#include<iostream>
#include<string>//getline을 쓸려면 string 헤더파일 필요
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);//cin, cout만 사용할때만 사용 프로그램이 무거워지는걸 방지 
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