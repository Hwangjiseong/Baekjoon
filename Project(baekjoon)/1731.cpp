#pragma warning (disable:4996) 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>//getline�� ������ string ������� �ʿ�
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0); cout.tie(0);
	//cin, cout�� ����Ҷ��� ��� ���α׷��� ���ſ����°� ����

	int n;
	cin >> n;
	vector<int> arr(n,0);
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ad = arr[1] - arr[0];
	int md = arr[1] / arr[0];
	int ck = 0;
	for (int i = 2; i <arr.size(); i++) {
		if (ad != arr[i] - arr[i - 1]) {
			ck = 1;
			break;
		}
	}
	for (int i = 2; i < arr.size(); i++) {
		if (md != arr[i] / arr[i - 1]) {
			ck = 0;
			break;
		}
	}
	if (ck == 0) {
		cout<< (long long)arr[n - 1] + ad;
	}
	else {
		cout << (long long)arr[n - 1] * md;
	}


	return 0;
}