#pragma warning (disable:4996)
#include<iostream>
#include<string>//getline을 쓸려면 string 헤더파일 필요
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);//cin, cout만 사용할때만 사용 프로그램이 무거워지는걸 방지 
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