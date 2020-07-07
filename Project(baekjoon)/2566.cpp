#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);
	int max = 0, x = 0,y = 0;
	vector<vector<int>>arr(10, vector<int>(10,0));

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cin >> arr[i][j];
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			if (max == arr[i][j]) {
				x = i; y = j;
				break;
			}
		}
	}
	cout << max << "\n";
	cout << x <<' '<< y;
	return 0;
}