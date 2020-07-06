#pragma warning(disable:4996)
#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);
	long long a, b;
	cin >> a >> b;

	if (a > b)swap(a, b);
	
	cout << (a+b)*(b-a+1)/2 << "\n";//시그마구하는 공식
	return 0;
}