#pragma warning (disable:4996)
#include<iostream>
#include<string>//getline을 쓸려면 string 헤더파일 필요
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);//cin, cout만 사용할때만 사용 프로그램이 무거워지는걸 방지 
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