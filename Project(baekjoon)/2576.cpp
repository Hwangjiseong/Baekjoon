#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);
	int n, ck = 1, min = 101, sum = 0;

	for (int i = 0; i < 7; i++) {
		cin >> n;
		if (n% 2== 1) {
			if(min > n)min = n;
			sum += n;
			ck = 0;
		}
	}
	
	if(ck == 0){
		cout << sum << "\n";
		cout << min;
	}else cout << "-1";
	return 0;
}