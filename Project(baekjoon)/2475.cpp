#pragma warning(disable:4996)
#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);
	vector<int> arr(5);
	int re = 0;
	for (int i = 0; i < arr.size(); i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < arr.size(); i++) {

		re += arr[i] * arr[i];
		
	}
	cout << re % 10;
	return 0;
}