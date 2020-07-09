#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int sum = 0;
vector<int>arr;

void change(void) {
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - arr[i] - arr[j] == 100) {
				for (int x = 0; x < 9; x++) {
					if (x != i && x != j) cout << arr[x] << endl;
						
				}
				return;
			}
			
		}
	}
	return;
}
int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);
	for (int i = 0; i < 9; i++) {
		int n;
		cin >> n;
		arr.push_back(n);
		sum += n;
	}
	sort(arr.begin(), arr.end());
	
	change();
	return 0;
}