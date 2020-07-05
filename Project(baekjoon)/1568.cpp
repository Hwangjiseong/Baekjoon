#pragma warning (disable:4996)
#include<iostream>
#include<algorithm>
#include<string>//getline을 쓸려면 string 헤더파일 필요
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//cin, cout만 사용할때만 사용 프로그램이 무거워지는걸 방지

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