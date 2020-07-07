#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);

	vector<int>arr(10);

	int max = 0, n, m = 0;
	for (int i = 1; i < 10; i++) {
		cin >> arr[i];
		if (max < arr[i])max = arr[i];

	}
	for (int i = 1; i < 10; i++) {
		if (max == arr[i]) m = i;
	}
	cout << max << "\n";
	cout << m;
	return 0;
}
