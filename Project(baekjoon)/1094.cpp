#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);//cin, cout만 사용할때만 사용 프로그램이 무거워지는걸 방지 
	cin.tie(0); cout.tie(0);

	int x, sum = 0, bar = 64, cnt = 0;//입력받는 x
	cin >> x;

	while (x != sum) {
		if (x == bar) {
			sum += bar;
			cnt++;
		}
		if (sum + bar <= x) {
			sum += bar;
			cnt++;
		}
		bar = bar / 2;
	}

	cout << cnt;

}