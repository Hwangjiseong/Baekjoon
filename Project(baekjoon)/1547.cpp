#pragma warning (disable:4996)
#include<iostream>
#include<algorithm>
#include<string>//getline을 쓸려면 string 헤더파일 필요
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//cin, cout만 사용할때만 사용 프로그램이 무거워지는걸 방지

	int arr[4] = { 0,1,0,0 };
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		swap(arr[x], arr[y]);
	}
	for (int i = 0; i < 4; i++)if (arr[i] == 1)cout << i;


	return 0;
}